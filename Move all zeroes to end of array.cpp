class Solution {
public:
    void pushZerosToEnd(int arr[], int n) {
        int non_zero_index = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                std::swap(arr[i], arr[non_zero_index]);
                non_zero_index++;
            }
        }
    }
};
