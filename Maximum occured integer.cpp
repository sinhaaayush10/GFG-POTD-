class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {
        // Your code here
        int a[maxx+1]={}, ans=0;
        for(int i=0; i<n; i++)
            a[l[i]]++, a[r[i]+1]--;

        int maxi=a[0];
        for(int i=0; i<=maxx; i++) {
            a[i] += a[i-1];
            if(a[i] > maxi) {
                maxi=a[i]; 
                ans=i;
            }
        }
        return ans;
    }
};
