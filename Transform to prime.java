class Solution
{
    // Function to check if a number is prime
    private boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    public int minNumber(int arr[], int N)
    {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += arr[i];
        }

        // Check if the sum is already prime
        if (isPrime(sum)) {
            return 0;
        }

        // Find the minimum positive number to be added
        // to make the sum a prime number
        for (int i = 1; ; i++) {
            if (isPrime(sum + i)) {
                return i;
            }
        }
    }
}
