class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int maxh = 0, maxf = arr[0];
        for (int i = 0; i < n; i++) {
            maxh += arr[i];
            if (maxf < maxh)
                maxf = maxh;
            if (maxh < 0)
                maxh = 0;
        }
        return maxf;
    }
};
