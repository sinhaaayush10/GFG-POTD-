class Solution {
    public int swapNibbles(int n) {
       
        int val = n % 16; 
        val = val << 4; 

       
        int jump = n >> 4; 

        // Combine the two nibbles
        val += jump;

        return val;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        int result = solution.swapNibbles(100); // example input
        System.out.println("Result after swapping nibbles: " + result);
    }
}
