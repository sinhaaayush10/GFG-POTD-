class Solution {
  public:
    bool isPossible(vector<int> &arr, int n, int k, int curMin) {
        int studentsRequired = 1;
        int curSum = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > curMin)
                return false;
            if (curSum + arr[i] > curMin) {
                studentsRequired++;
                curSum = arr[i];
                if (studentsRequired > k)
                    return false;
            }
            else {
                curSum += arr[i];
            }
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        int sum = 0;
        if (n < k)
            return -1;
        for (int i = 0; i < n; ++i)
            sum += arr[i];
        int start = 0;
        int end = sum, mid;
        int ans = INT_MAX;
        while (start <= end) {
            mid = (start + end) / 2;
            if (isPossible(arr, n, k, mid)) {
                ans = min(ans, mid);
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return ans;
    }
};
