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
14    bool isValidBST(TreeNode* root) {
15        return check(root, LONG_MIN, LONG_MAX);
16    }
17
18    bool check(TreeNode* node, long minVal, long maxVal) {
19        if (!node) return true;
20
21        if (node->val <= minVal || node->val >= maxVal)
22            return false;
23
24        return check(node->left, minVal, node->val) &&
25               check(node->right, node->val, maxVal);
26    }
27};
28