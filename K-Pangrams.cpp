class Solution {
  public:
    bool kPangram(string str, int k) {
        for (int i = 0; i < str.length(); i++)
            if (str[i] == ' ')
                str.erase(str.begin() + i);
        if (str.length() < 26)
            return false;
        if (k > 25)
            return true;
        else {
            int map[26] = {0};
            for (int i = 0; i < str.length(); i++)
                map[str[i] - 'a'] = 1;
            int count = 0;
            for (int i = 0; i < 26; i++) {
                if (map[i] == 1)
                    count++;
            }
            if (count + k >= 26)
                return true;
            else
                return false;
        }
    }
};
