class Solution {
    public:
    int missingNumber(int n, vector<int>& arr) {
          int val = 0;
        for (int i = 1; i <= n; i++)
            val = val ^ i;
        for (int i = 0; i < n - 1; i++)
            val = val ^ arr[i];
        return val;
    }
};
