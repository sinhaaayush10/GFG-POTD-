
class Solution {
  public:
    void dfs(int node, vector<bool>&vis, vector<int>&temp, unordered_map<int, list<int>>&adj){
        vis[node]=true;
        temp.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,temp,adj);
            }
        }
    }
    int findNumberOfGoodComponent(int e, int n, vector<vector<int>> &edges) {
        unordered_map<int, list<int>>adj;
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int cnt=0;
        vector<bool>vis(n+1);
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                vector<int>temp;
                dfs(i,vis,temp,adj);
                bool flag= true;
                for(auto it:temp){
                    if((adj[it].size()+1)!=temp.size()){
                        flag=false;
                    }
                }
                if(flag){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
