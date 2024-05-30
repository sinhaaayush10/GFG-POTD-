class Solution {
    public int countWays(String S1, String S2) {
        int mod = 1000000007;
        int n = S1.length();
        int m = S2.length();
        int[][] dp = new int[n + 1][m + 1];

        // If S2 is an empty string, there's one way to match it (remove all characters from S1)
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (S1.charAt(i - 1) == S2.charAt(j - 1)) {
                    dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
                } else {
                    dp[i][j] = dp[i - 1][j] % mod;
                }
            }
        }

        return dp[n][m] % mod;
    }
}
