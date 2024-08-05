class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> res;
        if(root==NULL){
            return res;
        }
        
        map<int, int> mp;
        queue<pair<Node* , int>> q;
        q.push({root, 0});
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            
            Node* node = temp.first;
            int vLine = temp.second;
            
            mp[vLine] = node->data;
            
            if(node->left){
                q.push({node->left, vLine-1});
            }
            
            if(node->right){
                q.push({node->right, vLine+1});
            }
        }
        
        for(auto i:mp){
            res.push_back(i.second);
        }
        
        return res;
    }
};
