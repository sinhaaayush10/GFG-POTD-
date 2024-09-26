class Solution {
  public:
    int maxStep(vector<int>& arr) {
        int c = 0;
        int m = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > arr[i - 1])
                c++;
            else {
                m = max(c, m);
                c = 0;
            }
        }
        m = max(c, m);
        return m;
    }
};
