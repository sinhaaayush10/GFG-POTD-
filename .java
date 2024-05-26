class Solution {
    public int findMinCost(String x, String y, int costX, int costY) {
        int n = x.length();
        int m = y.length();
        int[][] dp = new int[n+1][m+1];

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (i == 0) {
                    dp[i][j] = j * costY;
                } else if (j == 0) {
                    dp[i][j] = i * costX;
                } else if (x.charAt(i - 1) == y.charAt(j - 1)) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = Math.min(dp[i - 1][j] + costX, dp[i][j - 1] + costY);
                }
            }
        }
        return dp[n][m];
    }
}
