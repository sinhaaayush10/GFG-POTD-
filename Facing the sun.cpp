class Solution{
public:
    int countBuildings(vector<int> &height){
        int n = height.size();
        stack<int> s;
        vector<int> ans;
        s.push(-1);
        for (int i = 0; i < n; i++){
            int k = height[i];
            while (s.top() < k && s.top() != -1){
                s.pop();
            }
            ans.push_back(s.top());
            s.push(k);
        }
        int count = 0;
        for (int i = 0; i < n; i++){
            if (ans[i] == -1){
                count++;
            }
        }
        return count;
    }
};
