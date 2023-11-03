class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	  int squareArr[n];
        for (int i = 0; i < n; i++) {
            squareArr[i] = arr[i] * arr[i];
        }

        // Sort the squared array
        std::sort(squareArr, squareArr + n);

        for (int i = n - 1; i >= 2; i--) {
            int left = 0;
            int right = i - 1;

            while (left < right) {
                if (squareArr[left] + squareArr[right] == squareArr[i]) {
                    return true;  // Found a Pythagorean triplet
                } else if (squareArr[left] + squareArr[right] < squareArr[i]) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return false;
	}
};
