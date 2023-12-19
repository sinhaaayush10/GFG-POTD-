class Solution
{
    public:
    //Function to find the first position with different bits.
  int posOfRightMostDiffBit(int m, int n)
    {
        for(int i=0; i<31; i++){
            int j = (1<<i);
            if((m&j)!=(n&j)) return i+1;
        }
        
        return -1;
    }
};
 
