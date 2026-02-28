1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
15
16        vector<vector<int>> ans;
17        if (root == nullptr) return ans;
18
19        queue<TreeNode*> q;
20        q.push(root);
21
22        bool leftToRight = true;
23
24        while (!q.empty()) {
25            int size = q.size();
26            vector<int> level(size);
27
28            for (int i = 0; i < size; i++) {
29                TreeNode* node = q.front();
30                q.pop();
31
32                // decide index based on direction
33                int index = leftToRight ? i : size - 1 - i;
34                level[index] = node->val;
35
36                if (node->left)  q.push(node->left);
37                if (node->right) q.push(node->right);
38            }
39
40            ans.push_back(level);
41            leftToRight = !leftToRight;  // flip direction
42        }
43
44        return ans;
45    }
46};
47