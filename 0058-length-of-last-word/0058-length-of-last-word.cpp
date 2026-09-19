class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;

        // Skip spaces at the end
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        int count = 0;

        // Count characters of the last word
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
