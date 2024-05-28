public class Solution {
    int n;
    
    int solve(int[] cost, int w, int i, int[][] dp) {
        if (i >= n) {
            if (w == 0)
                return 0;
            return Integer.MAX_VALUE / 2;  
        }
        if (w < 0)
            return Integer.MAX_VALUE / 2; 
        if (dp[i][w] != -1)
            return dp[i][w];
        
        int t = Integer.MAX_VALUE / 2;  
        if (cost[i] != -1)
            t = cost[i] + solve(cost, w - (i + 1), i, dp);
        
        int n_t = solve(cost, w, i + 1, dp);
        return dp[i][w] = Math.min(t, n_t);
    }
    
    public int minimumCost(int N, int w, int[] cost) {
        n = N;
        int[][] dp = new int[n + 1][w + 1];
        for (int[] row : dp)
            Arrays.fill(row, -1);
        
        int result = solve(cost, w, 0, dp);
        return result >= Integer.MAX_VALUE / 2 ? -1 : result;  
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        int N = 5;
        int w = 5;
        int[] cost = {20, 10, 4, 50, 100};
        System.out.println(solution.minimumCost(N, w, cost)); 
    }
}
