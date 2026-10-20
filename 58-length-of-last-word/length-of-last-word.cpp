class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1, n = 0;
    while (i >= 0 && s[i] == ' ') i--;
    while (i >= 0 && s[i] != ' ') n++, i--;
    return n;
    }
};