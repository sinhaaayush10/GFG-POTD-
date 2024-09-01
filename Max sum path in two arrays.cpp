class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        int i = 0, j = 0;
        int result = 0, sum1 = 0, sum2 = 0;
        int m = arr1.size(), n = arr2.size();
        // Using two pointers to iterate over two arrays
        while (i < m && j < n) {
            // if ar1 is smaller than ar2, incresing ar1 and adding its value to sum1
            if (arr1[i] < arr2[j])
                sum1 += arr1[i++];
            // if ar2 is smaller than ar1, incresing ar2 and adding its value to sum2
            else if (arr1[i] > arr2[j])
                sum2 += arr2[j++];
            // if ar1=ar2, checking the maximum sum obtained from both the arrays
            // updating result and sum1 and sum2 is again changed to zero
            else {
                result += max(sum1, sum2);
                sum1 = 0, sum2 = 0;
                while (i < m && j < n && arr1[i] == arr2[j]) {
                    result = result + arr1[i++];
                    j++;
                }
            }
        }
        // if jth pointer reaches end
        while (i < m)
            sum1 += arr1[i++];
        // if ith pointer reaches end
        while (j < n)
            sum2 += arr2[j++];

        // last maximum sum to be added after the end of the loop
        result += max(sum1, sum2);

        return result;
    }
};
