public class Solution {
    
    public boolean checkPangram(String s) {
        boolean[] alphabet = new boolean[26];

        for (int i = 0; i < s.length(); i++) {

            if (s.charAt(i) >= 'A' && s.charAt(i) <= 'Z') {

                char lowercase = (char) (s.charAt(i) ^ (1 << 5));
                int index = lowercase - 'a';
                alphabet[index] = true;
            } else if (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {

                int index = s.charAt(i) - 'a';
                alphabet[index] = true;

            }
        }

        for (int i = 0; i < 26; i++) {
            if (!alphabet[i])
                return false;
        }
        return true;
    }
}

