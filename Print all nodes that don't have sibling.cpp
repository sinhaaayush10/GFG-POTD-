 void inorder(Node *node, vector<int> &ans){
    if(node == NULL)
        return;
         
    inorder(node->left, ans);
    
    if(node->left == NULL && node->right != NULL)
        ans.push_back(node->right->data);
    else if(node->left != NULL && node->right == NULL)
        ans.push_back(node->left->data);
        
    inorder(node->right, ans);
}
vector<int> noSibling(Node* node)
{
    vector<int> ans;
    if(node == NULL)
        return ans;
    
    inorder(node, ans);
    if(ans.size() == 0)
        ans.push_back(-1);
        
    sort(ans.begin(), ans.end());
    return ans;
}
