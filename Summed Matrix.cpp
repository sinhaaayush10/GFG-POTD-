class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        if(q>n*2)
            return 0;
        if(q<=n+1)
            return (q-1);
        else
            return ((n*2)-q+1);
    }
};
