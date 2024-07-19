vector<int> bit((int)1e6 + 1);
class Solution {
  public:
    void update(int i, int p) {
        for (; i < (int)1e6 + 1; i += i & (-i)) {
            bit[i] += p;
        }
    }
    int get(int i) {
        int ans = 0;
        for (; i > 0; i -= i & (-i)) {
            ans += bit[i];
        }
        return ans;
    }
    vector<int> constructLowerArray(vector<int>& a) {
        int n = a.size();
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++) {
            p.emplace_back(a[i], i);
        }
        sort(p.begin(), p.end(),
             [](const pair<int, int>& p1, const pair<int, int>& p2) {
                 return p1.first < p2.first;
             });
        int in = 1;
        unordered_map<int, int> hm;
        for (int i = 0; i < n; i++) {
            if (hm.find(p[i].first) == hm.end()) {
                hm[p[i].first] = in++;
            }
        }
        for (int i = 0; i < n; i++) {
            a[i] = hm[a[i]];
        }
        fill(bit.begin(), bit.end(), 0);

        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            ans[i] = get(a[i] - 1);
            update(a[i], 1);
        }
        return ans;
    }
};
