class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 0) return "";

        int start = 0, end = 0;

        for (int i = 0; i < n; i++) {
            int len1 = expand(s, i, i);       // odd length
            int len2 = expand(s, i, i + 1);   // even length

            int len = max(len1, len2);

            if (len > (end - start + 1)) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }

        return s.substr(start, end - start + 1);
    }

private:
    int expand(string &s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1; // length of palindrome
    }
};