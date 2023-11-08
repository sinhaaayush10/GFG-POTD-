class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
   vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        
        int n = matrix.size();
        int m = matrix[0].size();
         vector<int> temp;
        bool track = false;
        for(int i = 0; i<n; i++){
   
            for(int j = 0; j<m; j++){
                if(track){
                    int val = (n - 1) - j;
                    temp.push_back(matrix[i][val]);
                    
                }
                else temp.push_back(matrix[i][j]);
                
            }
            track = !track;
       
        }
        return temp;
    }
};
