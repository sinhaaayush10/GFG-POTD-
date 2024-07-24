class Solution {
private:
    std::stack<Node*> stack;
    std::stack<int> upperLimits;
    std::stack<int> lowerLimits;

public:
    bool isBST(Node* root) {
        int low = INT_MIN, high = INT_MAX;
        update(root, low, high);

        while (!stack.empty()) {
            root = stack.top();
            stack.pop();
            low = lowerLimits.top();
            lowerLimits.pop();
            high = upperLimits.top();
            upperLimits.pop();

            if (root == nullptr) continue;
            int val = root->data;
            if ((low != INT_MIN && val <= low) || (high != INT_MAX && val >= high)) {
                return false;
            }
            update(root->right, val, high);
            update(root->left, low, val);
        }
        return true;
    }

private:
    void update(Node* root, int low, int high) {
        if (root == nullptr) return;
        stack.push(root);
        lowerLimits.push(low);
        upperLimits.push(high);
    }
};
