class Solution {
  public:
    int smithNum(int n) {
        unordered_map<int,int> mb;
        int d = n;
        
        for(int i = 2;i*i<=d;i++){
            while(d%i == 0){
                mb[i]++;
                d/=i;
            }
        }
        if(d==n) return 0;
        if(d>1){
            mb[d]++;
        }
        int sum1 = 0;
        d = n;
        while(d>0){
            sum1+=(d%10);
            d/=10;
        }
        int sum2 = 0,cnt = 0;
        for(auto &it:mb){
            d = it.first;
            cnt = 0;
            while(d>0){
                cnt+=(d%10);
                d/=10;
            }
            sum2+=(cnt*it.second);
        }
        return sum1==sum2;
    }
};
