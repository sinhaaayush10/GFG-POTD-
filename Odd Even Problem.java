import java.util.*;

public class Solution {
    public String oddEven(String s) {
        int[] freq = new int[26];
        int x = 0, y = 0;
   
        for (char c : s.toCharArray()) {
            freq[c - 'a']++;
        }
  
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                if (i % 2 == 0 && freq[i] % 2 != 0) {
                    y++;
                }
                if (i % 2 != 0 && freq[i] % 2 == 0) {
                    x++;
                }
            }
        }
        if ((x + y) % 2 != 0) {
            return "ODD";
        }
        return "EVEN";
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        String input = "your_input_string"; // Replace with actual input
        System.out.println(sol.oddEven(input));
    }
}
