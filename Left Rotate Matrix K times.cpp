class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        vector<vector<int>>ans;
        int m = mat[0].size();
        k = k% m;
        for(int i= 0;i<mat.size();i++) {
            vector<int>temp = mat[i];
            reverse(temp.begin(), temp.begin()+k);
            reverse(temp.begin()+k, temp.end());
            reverse(temp.begin(), temp.end());
            
            ans.push_back(temp);
        }
        return ans;
    }
};
