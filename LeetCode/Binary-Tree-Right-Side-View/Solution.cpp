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
14    vector<int> rightSideView(TreeNode* root) {
15        vector<int> ans;
16        if (root == NULL) return ans;
17
18        queue<TreeNode*> q;
19        q.push(root);
20
21        while (!q.empty()) {
22            int levelSize = q.size();
23
24            for (int i = 0; i < levelSize; i++) {
25                TreeNode* node = q.front();
26                q.pop();
27
28                // last node of this level
29                if (i == levelSize - 1)
30                    ans.push_back(node->val);
31
32                if (node->left) q.push(node->left);
33                if (node->right) q.push(node->right);
34            }
35        }
36        return ans;
37    }
38};
39