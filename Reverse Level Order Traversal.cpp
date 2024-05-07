vector<int> reverseLevelOrder(Node *root){
    
    queue<Node*> q;
    q.push(root);
    vector<int> ans;
    
    while(!q.empty()){
        int sz = q.size();
        
        for(int i = 0; i < sz; i++){
            
            Node* front = q.front();
            ans.push_back(front->data);
            q.pop();
            
            if(front->right){
                q.push(front->right);
            }
            
            if(front->left){
                q.push(front->left);
            }
        }
        
    }
    
    reverse(ans.begin(), ans.end());
    
    return ans;
}
