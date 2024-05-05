class Solution{
  public:
    vector <int> verticalSum(Node *root) {
        queue<pair<Node*, int>>q;
        q.push({root,0});
        map<int,int>umap;
        while(!q.empty()){
            Node* curr=q.front().first;
            int level=q.front().second;
            q.pop();
            umap[level]+=curr->data;
            if(curr->left)q.push({curr->left,level-1});
            if(curr->right)q.push({curr->right,level+1});
        }
        vector<int>ans;
        for(auto it:umap){
            ans.push_back(it.second);
        }
        return ans;
    }
};
