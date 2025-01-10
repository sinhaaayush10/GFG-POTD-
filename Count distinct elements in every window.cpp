class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        unordered_map<int, int> um;
        int n = arr.size();
        vector<int> result;
        for (int i = 0; i < k; i++)
            um[arr[i]]++;
        result.push_back(um.size());
        for (int i = 1; i < n - k + 1; i++) {
            um[arr[i - 1]]--;
            if (um[arr[i - 1]] <= 0)
                um.erase(arr[i - 1]);
            um[arr[i + k - 1]]++;
            result.push_back(um.size());
        }
        return result;
    }
};
