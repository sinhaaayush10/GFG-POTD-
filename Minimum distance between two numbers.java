class Solution {
    int minDist(int a[], int n, int x, int y) {
        if(x==y){
            return 0;
            
        }
        boolean bool1 = false;
        int one = -1;
        boolean bool2 = false;
        int two = -1;
        int ans = Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(a[i] == x){
                bool1 = true;
                one = i;
                
            }
            if(bool1 && a[i]==y){
                ans = Math.min(ans,i-one);
                
            }
            if(a[i] == y){
                bool2 = true;
                two = i;
                
            }
            if(bool2 && a[i]==x){
                ans = Math.min(ans,i-two);
                
            }
            
        }
        return ans==Integer.MAX_VALUE?-1:ans;
        
    }
    
}
