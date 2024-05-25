class Solution {
    // Method to find the maximum number of books one can read continuously without reading a book with more than k pages
    public long max_Books(int[] a, int n, int k) {
        long sum = 0, temp = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] <= k) {
                temp += a[i];
            } else {
                sum = Math.max(sum, temp);
                temp = 0;
            }
        }

        return Math.max(sum, temp);
    }
}
