class Solution{
public:
  vector<int> ans;
    void help(int n)
    {
        if(n<=0)
        {
            ans.push_back(n);
            return;
        }
        ans.push_back(n);
        help(n-5);
        ans.push_back(n);
    }
    vector<int> pattern(int N){
        help(N);
        return ans;
    }
};
