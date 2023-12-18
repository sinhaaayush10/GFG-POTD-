class Solution {
  public:
       int gameOfXor(int n , int a[]) {
        int ans=0;
        for(int i=0; i<n; i++){
            long long res= (n- i)*(i+ 1);
            if(res%2!= 0){
                ans= (ans^a[i]);
            }
        }
        return ans;
    }
};
