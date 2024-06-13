
class Solution
{
    int mod = 1000000007;
    public:
    int padovanSequence(int n)
    {
       long long first = 1, second = 1, third = 1;
       for(int i=3; i<=n; i++) {
           long long temp = (first%mod + second%mod)%mod;
           first = second;
           second = third;
           third = temp;
       }
       return third%mod;
    }
    
};
