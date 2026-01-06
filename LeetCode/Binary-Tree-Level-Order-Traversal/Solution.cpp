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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        vector<vector<int>> result;
16        if (root == NULL) return result;
17
18        queue<TreeNode*> q;
19        q.push(root);
20
21        while (!q.empty()) {
22            int size = q.size();      // number of nodes in this level
23            vector<int> level;
24
25            for (int i = 0; i < size; i++) {
26                TreeNode* node = q.front();
27                q.pop();
28
29                level.push_back(node->val);
30
31                if (node->left) q.push(node->left);
32                if (node->right) q.push(node->right);
33            }
34
35            result.push_back(level);
36        }
37
38        return result;
39    }
40};
41