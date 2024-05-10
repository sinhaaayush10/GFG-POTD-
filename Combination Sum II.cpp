class Solution{
public:
    set<vector<int>> ans;
    void solve(int i,int k,vector<int>& arr,vector<int>& temp){
        if(k==0){
            ans.insert(temp);
            return ;
        }
        if(i>=arr.size()){
            return ;
        }
        
        // include
        if(k-arr[i]>=0){
            temp.push_back(arr[i]);
            solve(i+1,k-arr[i],arr,temp);
            temp.pop_back();
        }
        
        //exclude
        solve(i+1,k,arr,temp);
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        sort(arr.begin(),arr.end());
        vector<int> temp;
        solve(0,k,arr,temp);
        vector<vector<int>> vs(ans.begin(),ans.end());
        return vs;
    }
};
