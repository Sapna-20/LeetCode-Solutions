class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        vector<int> result;
        if (s.empty() || words.empty())
            return result;

        int wordLen = words[0].size();
        int wordCount = words.size();
        
        unordered_map<string, int> wordMap;
        for (string &w : words)
            wordMap[w]++;

        // Try each possible offset
        for (int i = 0; i < wordLen; i++) {
            
            int left = i;
            int count = 0;
            unordered_map<string, int> windowMap;

            for (int right = i; right + wordLen <= s.size(); right += wordLen) {
                
                string word = s.substr(right, wordLen);

                if (wordMap.count(word)) {
                    
                    windowMap[word]++;
                    count++;

                    // If extra word, shrink window
                    while (windowMap[word] > wordMap[word]) {
                        string leftWord = s.substr(left, wordLen);
                        windowMap[leftWord]--;
                        left += wordLen;
                        count--;
                    }

                    // If full match
                    if (count == wordCount)
                        result.push_back(left);

                } else {
                    // Reset if invalid word
                    windowMap.clear();
                    count = 0;
                    left = right + wordLen;
                }
            }
        }

        return result;
    }
};