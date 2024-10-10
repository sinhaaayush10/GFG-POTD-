class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        int max_dist = 0;
        for (int i = 0; i < n; i++) {
            if (mp.find(arr[i]) == mp.end())
                mp[arr[i]] = i;
            else
                max_dist = max(max_dist, i - mp[arr[i]]);
        }
        return max_dist;
    }
};
