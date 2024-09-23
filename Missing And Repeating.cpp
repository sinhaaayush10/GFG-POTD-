class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();
        long long s = (n * (n + 1)) / 2;
        long long ssq = (n * (n + 1) * (2 * n + 1)) / 6;
        long long missing = 0, repeating = 0;
        for (int i = 0; i < arr.size(); i++) {
           s -= 1LL*arr[i];
           ssq -= 1LL*arr[i] * arr[i];
        }
        missing = (s + ssq / s) / 2;
        repeating = missing - s;
        return {repeating, missing};
    }
};
