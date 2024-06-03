class Solution {
    public int mod = 1000000007;

    public int numberOfConsecutiveOnes(int n) {
        int[] dp = new int[100001];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

        int[] fib = new int[100001];
        fib[1] = 1;
        fib[2] = 1;

        for (int i = 3; i <= n; i++) {
            fib[i] = (fib[i - 1] % mod + fib[i - 2] % mod) % mod;
        }

        for (int i = 3; i <= n; i++) {
            dp[i] = (2 * dp[i - 1] % mod + fib[i - 1] % mod) % mod;
        }

        return dp[n];
    }
}
