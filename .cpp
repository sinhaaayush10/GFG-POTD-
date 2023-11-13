class Solution{
public:
    int shortestCommonSupersequence(string X, string Y, int n, int m){
        vector<int> prev(m+1,0) , curr(m+1,0);
        for(int i=1;i<=n;i++,prev=curr) 
            for(int j=1;j<=m;j++) 
                if(X[i-1] == Y[j-1]) curr[j] = 1 + prev[j-1];
                else curr[j] = max(prev[j],curr[j-1]);
        return n + m - curr[m];
    }
};
