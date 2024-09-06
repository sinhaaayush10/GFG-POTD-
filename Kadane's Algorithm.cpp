class Solution {
    public:
    long long maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        vector<long long> dp(n, 0);
        dp[0] = arr[0]*1LL;
        long long ans = dp[0];
        for (int i = 1; i < n; i++) {
            dp[i] = max(arr[i]*1LL, arr[i] + dp[i - 1]);
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
