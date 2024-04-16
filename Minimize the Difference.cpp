class Solution {
  public:
     int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        int post_max[n]; //post_max[i] := largest element from [i,n-1]
        int post_min[n]; //post_min[i] := smallest element from [i,n-1]
        
        // since there are no elements after (n-1)th index
        // therefore arr[n-1] is both max and min for (n-1)th index
        post_max[n - 1] = arr[n - 1];
        post_min[n - 1] = arr[n - 1];
        
        
        // precompute post_max[i] and post_min[i]
        for(int i = n - 2; i >= 0 ; i--){
            post_max[i] = max(post_max[i + 1] , arr[i]);
            post_min[i] = min(post_min[i + 1] , arr[i]);
        }
        
        
        // consider removing the subarray [0,k-1] from 'arr'
        // remaining elements indices := [k , n- 1]
        // therefore,
        // post_max[k] := max element from (kth) index to (n-1)
        // post_min[k] := min element from (kth) index to (n-1)
        // calculate difference
        int min_diff = post_max[k] - post_min[k];
        
        int p_max = arr[0]; //p_max = max element we encounter as we iterate forward
        int p_min = arr[0]; //p_min = min element "" "" as we iterate forward
        
        
        // for each subarray of length 'k'
        for(int i = 1 ; i < n - k ; i++){
            // calculate difference between max and min
            int curr_diff = max(p_max , post_max[i + k] ) - min(p_min , post_min[i + k]);
            min_diff = min(min_diff , curr_diff);
            p_max = max(p_max , arr[i]); // update p_max
            p_min = min(p_min , arr[i]); // update p_min
        }
        
        // case of last subarray of length 'k' 
        min_diff = min(min_diff , p_max - p_min);
        
        return min_diff;
    }
};
