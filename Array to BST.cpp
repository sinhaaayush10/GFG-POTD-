class Solution {
  public:
    Node* sortedArrayToBSTUtil(vector<int>& nums, int left, int right) {
        if (left > right)
            return NULL;
        int mid = left + (right - left) / 2;
        Node* node = new Node(nums[mid]);
        node->left = sortedArrayToBSTUtil(nums, left, mid - 1);
        node->right = sortedArrayToBSTUtil(nums, mid + 1, right);
        return node;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        Node* root = sortedArrayToBSTUtil(nums, 0, nums.size() - 1);
        return root;
    }
};
