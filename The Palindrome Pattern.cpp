class Solution {
  public:
    // Function to check if the given array is a palindrome.
    bool palindrome(int arr[], int n) {
        bool isPalindrome = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] != arr[n - 1 - i]) {
                isPalindrome = false;
            }
        }
        return isPalindrome;
    }

    // Function to find the pattern in the given 2D array.
    string pattern(vector<vector<int>> &arr) {
        int n = arr.size();

        string ans = "-1";

        // check for row
        for (int i = 0; i < n; i++) {
            int currRow[n];
            for (int j = 0; j < n; j++) {
                currRow[j] = arr[i][j];
            }

            if (palindrome(currRow, n)) {
                ans = to_string(i) + " R";
                return ans;
            }
        }

        // check for column
        for (int j = 0; j < n; j++) {
            int currCol[n];
            for (int i = 0; i < n; i++) {
                currCol[i] = arr[i][j];
            }

            if (palindrome(currCol, n)) {
                ans = to_string(j) + " C";
                return ans;
            }
        }

        return ans;
    }
};
