class Solution {
  public:
    // Recursive Function for inorder traversal to find out
    // the two swapped nodes.
    void correctBSTUtil(Node *root, Node *&first, Node *&middle, Node *&last,
                        Node *&prev) {
        if (root == nullptr)
            return;

        // Recur for the left subtree
        correctBSTUtil(root->left, first, middle, last, prev);

        // If this node is smaller than the previous node,
        // it's violating the BST rule.
        if (prev && root->data < prev->data) {

            // If this is the first violation, mark these
            // two nodes as 'first' and 'middle'
            if (!first) {
                first = prev;
                middle = root;
            }

            // If this is the second violation,
            // mark this node as last
            else
                last = root;
        }

        // Mark this node as previous
        prev = root;

        // Recur for the right subtree
        correctBSTUtil(root->right, first, middle, last, prev);
    }

    // Function to fix the given BST, where two nodes are swapped.
    void correctBST(Node *root) {

        // Initialize pointers needed for correctBSTUtil()
        Node *first = nullptr, *middle = nullptr, *last = nullptr, *prev = nullptr;

        // Set the pointers to find out two nodes
        correctBSTUtil(root, first, middle, last, prev);

        // Fix (or correct) the tree
        if (first && last)
            swap(first->data, last->data);
        else if (first && middle)
            swap(first->data, middle->data);
    }
};
