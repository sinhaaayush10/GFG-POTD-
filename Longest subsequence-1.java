class Solution {
    public int longestSubseq(int n, int[] a) {
        HashMap<Integer, Integer> dp = new HashMap<>();
        int ans = 0;
        for (int i = 0; i < n; i++) { 
            int current = a[i];
            int longestSubsequenceLength = Math.max(dp.getOrDefault(current - 1, 0), dp.getOrDefault(current + 1, 0)) + 1;
            dp.put(current, longestSubsequenceLength);
            ans = Math.max(ans, longestSubsequenceLength);
        }
        return ans;
    }
}
