class Solution {
  public:
    int minIncrements(vector<int> arr) {
        int ans = 0, N = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = 1; i < N; i++) {
            if (arr[i] <= arr[i - 1]) {
                ans += (arr[i - 1] - arr[i] + 1);
                arr[i] = arr[i - 1] + 1;
            }
        }
        return ans;
    }
};
