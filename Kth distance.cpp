class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int j = i + 1;
            int range = k;
            while (range > 0 and j < n) {
                if (arr[i] == arr[j])
                    return true;
                j++;
                range--;
            }
        }
        return false;
    }
};
