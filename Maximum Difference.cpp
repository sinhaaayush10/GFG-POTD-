class Solution {
  public:
    int findMaxDiff(vector<int> &arr) {
        int n = arr.size();
        vector<int> l(n, 0);
        stack<int> s;
        s.push(0);
        for (int i = 1; i < n; i++) {
            while (!s.empty() and arr[s.top()] > arr[i]) {
                l[s.top()] = arr[i];
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty()) {
            l[s.top()] = 0;
            s.pop();
        }
        vector<int> r(n, 0);
        for (int i = 0; i < n / 2; i++) {
            swap(arr[i], arr[n - i - 1]);
        }
        s.push(0);
        for (int i = 1; i < n; i++) {
            while (!s.empty() and arr[s.top()] > arr[i]) {
                r[s.top()] = arr[i];
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty()) {
            r[s.top()] = 0;
            s.pop();
        }
        for (int i = 0; i < n / 2; i++) {
            swap(r[i], r[n - i - 1]);
        }
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            ans = max(ans, abs(l[i] - r[i]));
        }
        return ans;
    }
};
