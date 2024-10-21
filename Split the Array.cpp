class Solution {
  public:
    int countgroup(vector<int>& arr) {
        int n = arr.size();
         int xs = 0;
          for (int i = 0; i < n; i++)
            xs = xs ^ arr[i];
          if (xs == 0)
            return (1 << (n-1)) - 1;
          return 0;
    }
};
