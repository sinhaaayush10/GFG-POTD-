class Solution {
  public:
    void dfs(Node* r,vector<int>temp,vector<vector<int>>&ans){
        if(r==NULL) return;
        temp.push_back(r->data);
        if(r->left==NULL and r->right==NULL){
            ans.push_back(temp);
        }
        if(r->left){
            dfs(r->left,temp,ans);
        }
        if(r->right){
            dfs(r->right,temp,ans);
        }
        temp.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>>ans;
        dfs(root,{},ans);
        return ans;
    }
};
