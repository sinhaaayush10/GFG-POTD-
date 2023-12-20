class Solution{
public:
    int findWinner(int n, int A[]){
        int val = 0;
        for(int i = 0; i < n; i++)
            val ^= A[i];
        if(val)
            return (n % 2) + 1;
        return 1;
    }
};
