class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        int h[26] = {0};

        // using hash table to store count of each character.
        for (int i = 0; i < s.length(); i++) {
            h[s[i] - 'a']++;
        }
        bool flag = false;

        // iterating over the string.
        for (int i = 0; i < s.length(); i++) {
            // if count of current character is 1, we return it.
            if (h[s[i] - 'a'] == 1) {
                flag = true;
                return s[i];
            }
        }
        // if there is no non-repeating character then we return '$'.
        if (!flag) {
            return '$';
        }
    }
};
