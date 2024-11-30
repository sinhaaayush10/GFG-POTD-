class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        int a[26] = {0};
        for (int i = 0; i < s1.length(); i++) {
            a[s1[i] - 'a']++;
        }
        for (int i = 0; i < s2.length(); i++) {
            a[s2[i] - 'a']--;
        }
        bool flag = true;
        for (int i = 0; i < 26; i++) {
            if (a[i] != 0) {
                flag = false;
                break;
            }
        }
        return flag;
    }
};
