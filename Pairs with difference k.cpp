class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        int n = arr.size();
        // Initialize the maximum element to 0.
        int maxEle = 0;
        // Find the maximum element in the array.
        for (int i = 0; i < n; i++) {
            maxEle = max(maxEle, arr[i]);
        }
        // Create a hash table to store the occurrences of each element.
        vector<int> hash(maxEle + 1, 0);
        for (int i = 0; i < n; i++) {
            hash[arr[i]]++;
        }
        // Initialize the count of pairs with difference k to 0.
        int count = 0;
        for (int i = 0; i <= maxEle; i++) {
            // Check if the element exists in the array.
            if (hash[i]) {
                // If the difference is 0, calculate the number of pairs with difference
                // 0.
                if (i == i + k) {
                    count += (hash[i] * (hash[i] - 1)) / 2;
                } else if (i + k <= maxEle) {
                    // Calculate the number of pairs with difference k.
                    count += (hash[i] * hash[i + k]);
                }
            }
        }
        // Return the count of pairs with difference k.
        return count;
    }
};
