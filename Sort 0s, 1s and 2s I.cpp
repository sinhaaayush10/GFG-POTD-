class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n - 1, mid = 0;
        while (mid <= high) {
            if (arr[mid] == 0)
                swap(arr[mid++], arr[low++]);
            else if (arr[mid] == 1)
                mid++;
            else
                swap(arr[mid], arr[high--]);
        }
    }
};
