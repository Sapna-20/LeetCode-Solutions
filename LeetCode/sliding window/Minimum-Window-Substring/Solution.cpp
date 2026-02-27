class Solution {
public:
    string minWindow(string s, string t) {
        
        vector<int> freq(128, 0);

        for(char c : t){
            freq[c]++;
        }

        int left = 0;
        int right = 0;

        int required = t.size();

        int minLength = INT_MAX;
        int startIndex = 0;

        while(right < s.size()){

            if(freq[s[right]] > 0){
                required--;
            }

            freq[s[right]]--;

            right++;

            while(required == 0){

                if(right - left < minLength){
                    minLength = right - left;
                    startIndex = left;
                }

                freq[s[left]]++;

                if(freq[s[left]] > 0){
                    required++;
                }

                left++;
            }
        }

        if(minLength == INT_MAX){
            return "";
        }

        return s.substr(startIndex, minLength);
    }
};