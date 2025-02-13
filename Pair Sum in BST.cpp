class Solution {
  public:
    void inorderTraversal(Node* root, vector<int>& inorder) {
        if (root == nullptr)
            return;
        inorderTraversal(root->left, inorder);
        inorder.push_back(root->data);
        inorderTraversal(root->right, inorder);
    }
    bool findTarget(Node* root, int target) {
        vector<int> inorder;
        inorderTraversal(root, inorder);
        int left = 0, right = inorder.size() - 1;
        while (left < right) {
            int currentSum = inorder[left] + inorder[right];
            if (currentSum == target)
                return true;
            if (currentSum < target)
                left++;
            else
                right--;
        }
        return false;
    }
};
