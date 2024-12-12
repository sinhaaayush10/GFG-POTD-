class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        auto low = lower_bound(arr.begin(), arr.end(), target);
        if (low == arr.end() || *low != target)
            return 0;
        auto high = upper_bound(low, arr.end(), target);
        return high - low;
    }
};
