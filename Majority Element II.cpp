class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        int num1 = 0, num2 = 0;
        int c1 = 0, c2 = 0;
        vector<int> res;
        for (auto x : arr) {
            if (x == num1)
                c1++;
            else if (x == num2)
                c2++;
            else if (c1 == 0) {
                num1 = x;
                c1++;
            } else if (c2 == 0) {
                num2 = x;
                c2++;
            } else {
                c1--;
                c2--;
            }
        }
        c1 = 0, c2 = 0;
        for (auto x : arr) {
            if (x == num1)
                c1++;
            else if (x == num2)
                c2++;
        }
        if (c1 > n / 3)
            res.push_back(num1);
        if (c2 > n / 3)
            res.push_back(num2);

        sort(res.begin(), res.end());
        return res;
    }
};
