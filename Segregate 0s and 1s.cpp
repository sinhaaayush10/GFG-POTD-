class Solution {
public:
    void segregate0and1(vector<int> &arr) {
      int n=arr.size();
        int zero = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                zero++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (zero > 0) {
                arr[i] = 0;
                zero--;
            } else {
                arr[i] = 1;
            }
        }
    }
};
