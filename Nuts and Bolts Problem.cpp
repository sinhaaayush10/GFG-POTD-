// GFG POTD : 
class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        map<char,int>mp;
        for(int i=0; i<n; i++)
            mp[nuts[i]]++;

        int i=0;
        for(auto x: mp){
            nuts[i] = x.first;
            bolts[i]= x.first;
            i++;
        }
    }
    
};
