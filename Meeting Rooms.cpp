
class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        int n = arr.size();
        // Sort the meetings by their start times
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n - 1; i++) {
            // Compare the current meeting's end time with the
            // next meeting's start time to check for overlap
            if (arr[i][1] > arr[i + 1][0])
                return false;
        }
        return true;
    }
};
