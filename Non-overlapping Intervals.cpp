class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int>& a,vector<int>& b){
            return a[1] < b[1];
        });
        int count = 0;
        int last = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            
            if(last > intervals[i][0]){
               count++;
            }
            else{
                last = intervals[i][1];
            }
        }
        return count;
    }
};
