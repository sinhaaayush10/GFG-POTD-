class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int N = arr.size();
        int ind = 0;
        for (int i = N - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                ind = i;
                break;
            }
        }
        for (int i = N - 1; i > ind; i--) {
            if (arr[i] > arr[ind]) {
                swap(arr[i], arr[ind]);
                ind++;
                break;
            }
        }
        for (int i = 0; i < (N - ind) / 2; i++)
            swap(arr[i + ind], arr[N - i - 1]);
    }
};
