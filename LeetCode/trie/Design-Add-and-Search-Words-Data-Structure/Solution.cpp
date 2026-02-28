1class WordDictionary {
2private:
3    struct TrieNode {
4        TrieNode* children[26];
5        bool isEnd;
6
7        TrieNode() {
8            isEnd = false;
9            for (int i = 0; i < 26; i++)
10                children[i] = NULL;
11        }
12    };
13
14    TrieNode* root;
15
16    // helper function for search
17    bool dfsSearch(string& word, int index, TrieNode* node) {
18        if (index == word.size())
19            return node->isEnd;
20
21        char ch = word[index];
22
23        // if character is dot '.'
24        if (ch == '.') {
25            for (int i = 0; i < 26; i++) {
26                if (node->children[i] &&
27                    dfsSearch(word, index + 1, node->children[i]))
28                    return true;
29            }
30            return false;
31        }
32        else {
33            int idx = ch - 'a';
34            if (!node->children[idx])
35                return false;
36            return dfsSearch(word, index + 1, node->children[idx]);
37        }
38    }
39
40public:
41    WordDictionary() {
42        root = new TrieNode();
43    }
44
45    void addWord(string word) {
46        TrieNode* curr = root;
47        for (char ch : word) {
48            int idx = ch - 'a';
49            if (!curr->children[idx])
50                curr->children[idx] = new TrieNode();
51            curr = curr->children[idx];
52        }
53        curr->isEnd = true;
54    }
55
56    bool search(string word) {
57        return dfsSearch(word, 0, root);
58    }
59};
60