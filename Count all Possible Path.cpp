class Solution {
public:
int isPossible(vector<vector<int>>paths){
    for(int i=0;i<paths.size();i++) {
        int c = 0; 
        for(int j=0;j<paths.size();j++){n 
            if(paths[i][j]==1) c++;
        }
        if(c%2) return 0;
    }
    return 1;
}
 
};
