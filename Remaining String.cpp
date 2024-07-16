class Solution {
    public:
    string printString(string &str, char ch, int count) {
        int occ = 0, i;
        for (i = 0; i < str.size(); i++) {
            if (str[i] == ch)
                occ++;
            if (occ == count)
                break;
        }
        if (i < str.length() - 1)
            return str.substr(i + 1, str.length() - (i + 1));
        else
            return "";
    }
};
