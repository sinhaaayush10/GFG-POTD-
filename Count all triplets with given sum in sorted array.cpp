class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
    int cnt=0;
    int n=arr.size();
    for (int i = 0; i < n; i++) {
        //remove duplicates:
        // if (i != 0 && arr[i] == arr[i - 1]) continue;

        //moving 2 pointers:
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < target) {
                j++;
            }
            else if (sum > target) {
                k--;
            }
            else {
               int ele1 = arr[j], ele2 = arr[k];
                int cnt1 = 0, cnt2 = 0;

                // Count frequency of the current value at 'left'
                while (j <= k && arr[j] == ele1) {
                    j++;
                    cnt1++;
                }

                // Count frequency of the current value at 'right'
                while (j<= k && arr[k] == ele2) {
                    k--;
                    cnt2++;
                }

                // If both the elements are same, then count of
                // pairs = the number of ways to choose 2
                // elements among cnt1 elements
                if (ele1 == ele2)
                    cnt += (cnt1 * (cnt1 - 1)) / 2;

                // If the elements are different, then count of
                // pairs = product of the count of both elements
                else
                    cnt += (cnt1 * cnt2);
            }
        }
    }
    return cnt;
    }
};
