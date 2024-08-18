class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int leftSum = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
            leftSum += arr[i];
        int rightSum = 0;
        for (int i = n - 1; i >= 0; i--) {
            rightSum += arr[i];
            leftSum -= arr[i];
            if (rightSum == leftSum)
                return true;
        }
        return false;
    }
}; 
