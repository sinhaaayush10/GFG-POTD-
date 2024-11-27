class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int n =arr.size();
        std::unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        int num=1;
        while(m[num]!=0)
        {
            num++;
        }
        return num;        
    }
};
