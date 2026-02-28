1/*
2// Definition for a QuadTree node.
3class Node {
4public:
5    bool val;
6    bool isLeaf;
7    Node* topLeft;
8    Node* topRight;
9    Node* bottomLeft;
10    Node* bottomRight;
11    
12    Node() {
13        val = false;
14        isLeaf = false;
15        topLeft = NULL;
16        topRight = NULL;
17        bottomLeft = NULL;
18        bottomRight = NULL;
19    }
20    
21    Node(bool _val, bool _isLeaf) {
22        val = _val;
23        isLeaf = _isLeaf;
24        topLeft = NULL;
25        topRight = NULL;
26        bottomLeft = NULL;
27        bottomRight = NULL;
28    }
29    
30    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
31        val = _val;
32        isLeaf = _isLeaf;
33        topLeft = _topLeft;
34        topRight = _topRight;
35        bottomLeft = _bottomLeft;
36        bottomRight = _bottomRight;
37    }
38};
39*/
40
41class Solution {
42public:
43    Node* construct(vector<vector<int>>& grid) {
44        return build(grid, 0, 0, grid.size());
45    }
46
47    Node* build(vector<vector<int>>& grid, int row, int col, int size) {
48        // Step 1: check if all values are same
49        bool same = true;
50        int first = grid[row][col];
51
52        for (int i = row; i < row + size; i++) {
53            for (int j = col; j < col + size; j++) {
54                if (grid[i][j] != first) {
55                    same = false;
56                    break;
57                }
58            }
59        }
60
61        // Step 2: if same, make leaf node
62        if (same) {
63            return new Node(first == 1, true);
64        }
65
66        // Step 3: divide into 4 parts
67        int half = size / 2;
68
69        Node* topLeft = build(grid, row, col, half);
70        Node* topRight = build(grid, row, col + half, half);
71        Node* bottomLeft = build(grid, row + half, col, half);
72        Node* bottomRight = build(grid, row + half, col + half, half);
73
74        // Step 4: create non-leaf node
75        return new Node(true, false, topLeft, topRight, bottomLeft, bottomRight);
76    }
77};
78