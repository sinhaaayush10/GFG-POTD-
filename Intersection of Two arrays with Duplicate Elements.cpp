class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        map<int , int> mp1 , mp2;
        for(int i = 0 ; i < n ; i++) {
            mp1[a[i]]++;
        }
        for(int i = 0 ; i < m ; i++) {
            mp2[b[i]]++;
        }
        map<int , int> :: iterator itr;
        vector<int> result;
        for(itr = mp2.begin() ; itr != mp2.end() ; itr++) {
            int ele = itr->first;
            if(mp1[ele]) {
                result.push_back(ele);
            }
        }
        return result;
    }
};
