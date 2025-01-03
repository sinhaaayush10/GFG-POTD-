class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int res = 0;
        unordered_map<int, int> mp;
        int prefXOR = 0;
        for (int val : arr) {
            prefXOR ^= val;
            res = res + mp[prefXOR ^ k];
            if (prefXOR == k)
                res++;
            mp[prefXOR]++;
        }
        return res;
    }
};
