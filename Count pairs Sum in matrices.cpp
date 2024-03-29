
class Solution{ 
public: 
  
 bool check(vector<vector<int>> &mat2, int n, int x){
    int i = 0;
    int j = n-1;
    while(i >= 0 && i < n && j >= 0 && j < n){
        if(mat2[i][j] == x){
            return true;
        }
        else if(mat2[i][j] < x){
            i++;
        }
        else j--;
    }
    return false;
}
int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
{
    // Your code goes here
    int cnt = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            int c = x - mat1[i][j];
            if(check(mat2,n,c)){
                cnt++;
            }
        }
    }
    return cnt;
}
};
