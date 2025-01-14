class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        long long sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i];
        long long sum2 = 0;
        for (int i = 0; i < n; i++) {
            sum = sum - arr[i];
            if (sum2 == sum) {
                return i;
            }
            sum2 = sum2 + arr[i];
        }
        return -1;
    }
};
