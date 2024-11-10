class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int>ans;
        int i = 0;
        int j = 0;
        int n1 = a.size();
        int n2 = b.size();
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else if (a[i]==b[j]){
                ans.push_back(a[i]);
                i++;
                j++;
            } 
            else if(a[i]>b[j]){
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<n1){
            ans.push_back(a[i]);
            i++;
        }
        while(j<n2){
            ans.push_back(b[j]);
            j++;
        }
        return ans;
    }
};
