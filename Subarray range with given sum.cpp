class Solution {
  public:
    int subArraySum(vector<int>& arr, int tar) {
        unordered_map<int, int> map;
        int n = arr.size();
        int curr_sum = 0;
        int count = 0;
        unordered_map<int, int>::iterator x;
        for (int i = 0; i < n; i++) {
            curr_sum = curr_sum + arr[i];
            if (curr_sum == tar) {
                count++;
            }
            x = map.find(curr_sum - tar);
            if (x != map.end())
                count += x->second;
            map[curr_sum]++;
        }
        return count;
    }
};
