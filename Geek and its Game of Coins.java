public class Solution {
    public int solve(int n, int x, int y, int[] dp) {
        if (n <= 1)
            return n;
        if (dp[n] != -1)
            return dp[n];
        int ans = 1;
        if (n >= x)
            ans &= solve(n - x, x, y, dp);
        if (n >= y)
            ans &= solve(n - y, x, y, dp);
        ans &= solve(n - 1, x, y, dp);
        return dp[n] = ans ^ 1;
    }

    public int findWinner(int n, int x, int y) {
        int[] dp = new int[n + 1];
        Arrays.fill(dp, -1);
        return solve(n, x, y, dp);
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        int n = 10, x = 3, y = 4;
        System.out.println("Winner: " + sol.findWinner(n, x, y));
    }
}
