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
14    vector<double> averageOfLevels(TreeNode* root) {
15        vector<double> result;
16        if (!root) return result;
17
18        queue<TreeNode*> q;
19        q.push(root);
20
21        while (!q.empty()) {
22            int size = q.size();
23            long long sum = 0;
24
25            for (int i = 0; i < size; i++) {
26                TreeNode* node = q.front();
27                q.pop();
28                sum += node->val;
29
30                if (node->left) q.push(node->left);
31                if (node->right) q.push(node->right);
32            }
33
34            result.push_back((double)sum / size);
35        }
36
37        return result;
38    }
39};
40