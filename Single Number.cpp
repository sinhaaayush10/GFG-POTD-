class Solution {
  public:
    // Function to find the element in the array which occurs only once.
    int getSingle(vector<int>& arr) {
        // variable to store the XOR of all elements in the array.
        int xr = 0;
        int n = arr.size();

        // iterating over all the elements in the array.
        for (int i = 0; i < n; i++) {
            // calculating XOR of each element with the previous XOR.
            xr = xr ^ arr[i];
        }

        // returning the element which occurs only once.
        return xr;
    }
};
