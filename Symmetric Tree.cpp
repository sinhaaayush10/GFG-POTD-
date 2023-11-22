class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool f(Node *r1,Node *r2){
        if(!r1 && !r2) return true;
        if((!r1 && r2) || (r1 && !r2)) return false;
        bool l = f(r1->left,r2->right);
        bool r = f(r1->right,r2->left);
        bool value = r1->data == r2->data;
        return l && r && value;
    }
    bool isSymmetric(struct Node* root)
    {
        // Code here
        return f(root,root);
    }
};
