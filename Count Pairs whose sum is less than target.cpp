class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(), arr.end());
        
        int total = 0;
        for (int i = 0, j = arr.size() - 1; i < j; )
        {
            if (arr[i] + arr[j] < target)
            {
                total += j - i;
                ++i;
            }
            else
            {
                --j;
            }
        }
        
        return total;
    }
};
