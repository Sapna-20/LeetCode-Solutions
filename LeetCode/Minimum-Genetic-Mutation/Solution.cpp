1class Solution {
2public:
3    int minMutation(string start, string end, vector<string>& bank) {
4
5        // STEP 1: store bank in a set for fast lookup
6        unordered_set<string> bankSet(bank.begin(), bank.end());
7
8        // if end gene is not in bank, impossible
9        if (bankSet.find(end) == bankSet.end())
10            return -1;
11
12        // STEP 2: BFS queue
13        queue<string> q;
14        q.push(start);
15
16        // visited set to avoid revisiting
17        unordered_set<string> visited;
18        visited.insert(start);
19
20        int steps = 0;
21        vector<char> genes = {'A', 'C', 'G', 'T'};
22
23        // STEP 3: BFS
24        while (!q.empty()) {
25
26            int size = q.size();  // number of nodes at this level
27
28            while (size--) {
29                string curr = q.front();
30                q.pop();
31
32                // if reached end gene
33                if (curr == end)
34                    return steps;
35
36                // STEP 4: try all positions
37                for (int i = 0; i < 8; i++) {
38                    char original = curr[i];
39
40                    // STEP 5: try A, C, G, T
41                    for (char c : genes) {
42                        if (c == original) continue;
43
44                        curr[i] = c;
45
46                        // STEP 6: check bank + visited
47                        if (bankSet.count(curr) && !visited.count(curr)) {
48                            visited.insert(curr);
49                            q.push(curr);
50                        }
51                    }
52
53                    // restore original character
54                    curr[i] = original;
55                }
56            }
57
58            // one mutation level completed
59            steps++;
60        }
61
62        // STEP 7: if end not reached
63        return -1;
64    }
65};
66