class Solution{
  
 public:
 int solve(int n, int m, int a[], int b[], vector<vector<int>> &dp)
 {
     if(m < 0)
         return 0;
     if(n < 0)
         return INT_MIN;
    if(dp[n][m] != -1)
     return dp[n][m];
    int take = a[n] * b[m] + solve(n - 1, m - 1, a, b, dp);
    int not_take = solve(n - 1, m, a, b, dp);
    return dp[n][m] = max(take, not_take);
 }
 int maxDotProduct(int n, int m, int a[], int b[]) 
 { 
  vector<vector<int>> dp(n, vector<int>(m, -1));
  return solve(n - 1, m - 1, a, b, dp);
 } 
};
