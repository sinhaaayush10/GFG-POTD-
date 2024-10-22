class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        int n = arr.size();
        vector<int> countX(n), countY(n);
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                countX[i] = (i != 0) ? countX[i - 1] + 1 : 1;
            } else {
                countX[i] = (i != 0) ? countX[i - 1] : 0;
            }
            if (arr[i] == y) {
                countY[i] = (i != 0) ? countY[i - 1] + 1 : 1;
            } else {
                countY[i] = (i != 0) ? countY[i - 1] : 0;
            }
            m[countX[i] - countY[i]]++;
        }
        int result = m[0];
        for (auto it = m.begin(); it != m.end(); ++it) {
            long long freq = it->second;
            result = result + (freq * (freq - 1)) / 2LL;
        }
        return result;
    }
};
