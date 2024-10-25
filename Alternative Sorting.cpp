class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Sorting the array
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> ans;
        // Printing the last element of array
        // first and then first element and then
        // second last element and then second
        // element and so on.
        int i = 0, j = n - 1;
        while (i < j) {
            ans.push_back(arr[j--]);
            ans.push_back(arr[i++]);
        }

        if (n % 2 != 0)
            ans.push_back(arr[i]);
        return ans;
    }
};
