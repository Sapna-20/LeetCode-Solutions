1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> neighbors;
7    Node() {
8        val = 0;
9        neighbors = vector<Node*>();
10    }
11    Node(int _val) {
12        val = _val;
13        neighbors = vector<Node*>();
14    }
15    Node(int _val, vector<Node*> _neighbors) {
16        val = _val;
17        neighbors = _neighbors;
18    }
19};
20*/
21
22class Solution {
23public:
24    // map: original node -> cloned node
25    unordered_map<Node*, Node*> mp;
26
27    Node* cloneGraph(Node* node) {
28        // base case
29        if (node == NULL) return NULL;
30
31        // if node already cloned, return it
32        if (mp.find(node) != mp.end())
33            return mp[node];
34
35        // create new node (clone)
36        Node* clone = new Node(node->val);
37
38        // store in map
39        mp[node] = clone;
40
41        // copy neighbors one by one
42        for (Node* nei : node->neighbors) {
43            clone->neighbors.push_back(cloneGraph(nei));
44        }
45
46        return clone;
47    }
48};
49