1class Trie {
2public:
3    Trie* child[26];
4    bool isEnd;
5
6    Trie() {
7        for (int i = 0; i < 26; i++)
8            child[i] = NULL;
9        isEnd = false;
10    }
11
12    void insert(string word) {
13        Trie* node = this;
14        for (char c : word) {
15            int idx = c - 'a';
16            if (!node->child[idx])
17                node->child[idx] = new Trie();
18            node = node->child[idx];
19        }
20        node->isEnd = true;
21    }
22
23    bool search(string word) {
24        Trie* node = this;
25        for (char c : word) {
26            int idx = c - 'a';
27            if (!node->child[idx])
28                return false;
29            node = node->child[idx];
30        }
31        return node->isEnd;
32    }
33
34    bool startsWith(string prefix) {
35        Trie* node = this;
36        for (char c : prefix) {
37            int idx = c - 'a';
38            if (!node->child[idx])
39                return false;
40            node = node->child[idx];
41        }
42        return true;
43    }
44};
45