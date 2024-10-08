class Solution {
  public:
    int mod = 1e9 + 7;
    int Maximize(vector<int> arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unsigned long long int ans = 0;
        for (int i = 0; i < n; i++)
            ans = (ans + ((unsigned long long)arr[i] * i) % mod) % mod;
        return ans;
    }
};
