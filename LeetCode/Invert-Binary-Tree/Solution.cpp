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
14   TreeNode* invertTree(TreeNode* root) {
15    if (root == nullptr) return nullptr;
16
17    swap(root->left, root->right);
18
19    invertTree(root->left);
20    invertTree(root->right);
21
22    return root;
23}
24
25};