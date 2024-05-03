class Solution
{
    public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(struct Node *root, int k)
    {
      
        vector<int> v;
        if(root == NULL){
            return v;
        }
        queue<pair<Node*, int>>q; 
        
        q.push({root,0}); 
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node* temp = it.first;
            int val = it.second;
            if(val == k){
                v.push_back(temp->data);
            }
            
            if(temp->left != NULL){
                q.push({temp->left,val + 1});
            }
            
            if(temp->right != NULL){
                q.push({temp->right,val + 1});
            }
        }
        return v;
    }
};
