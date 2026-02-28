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
14    int leftHeight(TreeNode* node) {
15    int h = 0;
16    while (node) {
17        h++;
18        node = node->left;
19    }
20    return h;
21}
22
23int rightHeight(TreeNode* node) {
24    int h = 0;
25    while (node) {
26        h++;
27        node = node->right;
28    }
29    return h;
30}
31
32int countNodes(TreeNode* root) {
33    if (!root) return 0;
34
35    int lh = leftHeight(root);
36    int rh = rightHeight(root);
37
38    // Perfect tree → use formula
39    if (lh == rh)
40        return (1 << lh) - 1;
41
42    // Not perfect → normal recursion
43    return 1 + countNodes(root->left) + countNodes(root->right);
44}
45
46};