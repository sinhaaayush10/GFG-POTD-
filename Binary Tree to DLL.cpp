class Solution {
  public:
    Node* prev = NULL;
    void bToDLLUtil(Node* root, Node*& head) {
        if (root == NULL)
            return;
        bToDLLUtil(root->left, head);
        if (prev == NULL)
            head = root;
        else {
            root->left = prev;
            prev->right = root;
        }
        prev = root;
        bToDLLUtil(root->right, head);
    }
    Node* bToDLL(Node* root) {
        Node* head = NULL;
        bToDLLUtil(root, head);
        return head;
    }
};
