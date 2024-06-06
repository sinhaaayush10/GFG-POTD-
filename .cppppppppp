/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
        long long sum = 0;
        long long tsum = 0;

        // Ensure val is of type long long
        // This way, val * a[i] will be evaluated as long long,
        // preventing overflow that could occur if a[i] was multiplied by an int
        long long val ;
        for(int i = 0 ;  i<n ;i++){
            val = i;
            sum+=a[i];
            tsum+=val*a[i];
        }
        long long maxi = tsum;

        //N*a[n-i] will not cause overflow
        // n*a[n-i] can causes overflow 
        long long N = n;

        for(int i = 1 ; i<n ;i++){
            tsum = tsum + sum - N*a[n-i];
            maxi = max(maxi,tsum);
        }
        return maxi;
    }
    
};
