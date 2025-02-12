class Solution {
  public:
    int kthSmallest(Node *root, int k) {
        Node *cur = root, *pre;

        int ans = -1;

        // Inorder morris traversal
        while (cur != NULL) {
            if (cur->left == NULL) {
                // If current node is the kth smallest element,
                // update answer and decrement k
                if (k == 1)
                    ans = cur->data;
                k--;
                cur = cur->right;
            } else {
                pre = cur->left;

                // Finding the rightmost node of the left subtree
                while (pre->right != NULL and pre->right != cur)
                    pre = pre->right;

                if (pre->right == NULL) {
                    // Creating a thread from rightmost node of left subtree to current
                    // node
                    pre->right = cur;
                    cur = cur->left;
                } else {
                    // If the thread already exists, update answer and decrement k
                    if (k == 1)
                        ans = cur->data;
                    k--;
                    pre->right = NULL;
                    cur = cur->right;
                }
            }
        }
        return ans;
    }
};
