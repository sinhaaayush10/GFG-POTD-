class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<int,pair<int,int>>>arr;
        for(int i=0;i<N;i++)
        arr.push_back({F[i],{S[i],i+1}});
        sort(arr.begin(),arr.end());
        vector<int>ans;
        int end=INT_MIN;
        for(int i=0;i<N;i++)
        {
            if(end<arr[i].second.first)
            {
                ans.push_back(arr[i].second.second);
                end=max(end,arr[i].first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
