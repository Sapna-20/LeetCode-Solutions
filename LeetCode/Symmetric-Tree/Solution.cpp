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
14   bool isMirror(TreeNode* a, TreeNode* b) {
15    if (!a && !b) return true;        
16    if (!a || !b) return false;       
17    if (a->val != b->val) return false;
18
19    return isMirror(a->left, b->right) &&
20           isMirror(a->right, b->left);
21}
22
23bool isSymmetric(TreeNode* root) {
24    return isMirror(root->left, root->right);
25}
26
27};