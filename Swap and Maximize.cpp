class Solution {
  public:
    long long maxSum(vector<int> &arr) {
        long long sum = 0;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n / 2; i++) {
            sum -= (2 * arr[i]);
            sum += (2 * arr[n - i - 1]);
        }
        return sum;
    }
};
