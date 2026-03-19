class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int sIndex = 0;
        int tIndex = 0;


        while (tIndex < t.size()) {

        if (sIndex < s.size() && s[sIndex] == t[tIndex]) {
                sIndex++;  
            }

            tIndex++; 
        }

      
        if (sIndex == s.size()) {
            return true;
        }

        return false;
    }
};