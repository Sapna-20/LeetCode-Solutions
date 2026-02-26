1class Solution {
2public:
3    vector<int> findSubstring(string s, vector<string>& words) {
4        
5        vector<int> result;
6        if (s.empty() || words.empty())
7            return result;
8
9        int wordLen = words[0].size();
10        int wordCount = words.size();
11        
12        unordered_map<string, int> wordMap;
13        for (string &w : words)
14            wordMap[w]++;
15
16        // Try each possible offset
17        for (int i = 0; i < wordLen; i++) {
18            
19            int left = i;
20            int count = 0;
21            unordered_map<string, int> windowMap;
22
23            for (int right = i; right + wordLen <= s.size(); right += wordLen) {
24                
25                string word = s.substr(right, wordLen);
26
27                if (wordMap.count(word)) {
28                    
29                    windowMap[word]++;
30                    count++;
31
32                    // If extra word, shrink window
33                    while (windowMap[word] > wordMap[word]) {
34                        string leftWord = s.substr(left, wordLen);
35                        windowMap[leftWord]--;
36                        left += wordLen;
37                        count--;
38                    }
39
40                    // If full match
41                    if (count == wordCount)
42                        result.push_back(left);
43
44                } else {
45                    // Reset if invalid word
46                    windowMap.clear();
47                    count = 0;
48                    left = right + wordLen;
49                }
50            }
51        }
52
53        return result;
54    }
55};