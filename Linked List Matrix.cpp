class Solution {
    public:
    Node* constructUtil(vector<vector<int>>& mat, int i, int j, int m, int n) {
        if (i >= m || j >= n)
            return NULL;
        Node* temp = new Node(mat[i][j]);
        temp->right = constructUtil(mat, i, j + 1, m, n);
        temp->down = constructUtil(mat, i + 1, j, m, n);
        return temp;
    }
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        return constructUtil(mat, 0, 0, m, n);
    }
};
