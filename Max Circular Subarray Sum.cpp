class Solution {
  private:
    int kadane(vector<int>& a) {
        int maxi = a[0];
        int curr = a[0];
        for(int i=1; i<a.size(); i++) {
            curr = max(a[i], curr+a[i]);
            maxi = max(maxi, curr);
        }
        return maxi;
    }
  public:
    int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int maxi1 = kadane(arr);
        if(maxi1 < 0)
            return maxi1;
        int sum = 0;
        for(int i=0; i<n; i++) {
            sum += arr[i];
            arr[i] = -arr[i];
        }
        int min1 = kadane(arr);
        int maxi2 = sum + min1;
        
        return max(maxi1, maxi2);
    }
};
