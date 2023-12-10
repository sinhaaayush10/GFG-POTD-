class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        vector<int>sums;
        sums.push_back(0);
        int sum=0;
        for(int i=0; i<n; i++){
            sum+= arr[i];
            sums.push_back(sum);
        }
        for(int i=0; i<n; i++){
            for(int j=i+ 1; j<=n; j++){
                if(sums[j]- sums[i]== 0){
                    return true;
                }
            }
        }
        return false;
    }
};
