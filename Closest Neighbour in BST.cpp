class Solution {
  public:
    int findMaxForN(Node* root, int n) {
         int num=-1;
        while(root!=NULL){
            if(root->key<=n){
                num=root->key;
                root=root->right;
            }
            else{
                root=root->left;
            }
        }
        return num;
    }
};
