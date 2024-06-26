class Solution {
  public:
    // Function to find the number of cells with a value of 0 adjacent to a cell with a
    // value of 1 in a binary matrix.
    int findCoverage(vector<vector<int>>& matrix) {
        int ans = 0;
        int n = matrix.size();        // getting the number of rows in the matrix.
        int m = matrix[0].size();     // getting the number of columns in the matrix.
        for (int i = 0; i < n; i++) { // iterating over each row.
            for (int j = 0; j < m; j++) { // iterating over each column.
                if (matrix[i][j] == 1) // if the current cell has a value of 1, continue
                                       // to the next iteration.
                    continue;
                if (i - 1 >= 0 and matrix[i - 1][j]) // checking if the cell above the
                                                     // current cell has a value of 1.
                    ans++; // incrementing the count of adjacent cells.
                if (i + 1 < n and matrix[i + 1][j]) // checking if the cell below the
                                                    // current cell has a value of 1.
                    ans++; // incrementing the count of adjacent cells.
                if (j - 1 >= 0 and
                    matrix[i][j - 1]) // checking if the cell to the left of the current
                                      // cell has a value of 1.
                    ans++;            // incrementing the count of adjacent cells.
                if (j + 1 < m and
                    matrix[i][j + 1]) // checking if the cell to the right of the
                                      // current cell has a value of 1.
                    ans++;            // incrementing the count of adjacent cells.
            }
        }
        return ans; // returning the total count of adjacent cells with a value of 0.
    }
};
