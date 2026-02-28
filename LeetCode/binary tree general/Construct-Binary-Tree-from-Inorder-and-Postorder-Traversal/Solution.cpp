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
14    int idx;
15
16    TreeNode* solve(vector<int>& postorder, vector<int>& inorder,
17                    int start, int end) {
18
19        if (start > end) return NULL;
20
21        // root from postorder (last element)
22        TreeNode* root = new TreeNode(postorder[idx--]);
23
24        // find root in inorder
25        int pos = start;
26        while (inorder[pos] != root->val) pos++;
27
28        // IMPORTANT: right subtree first
29        root->right = solve(postorder, inorder, pos + 1, end);
30        root->left  = solve(postorder, inorder, start, pos - 1);
31
32        return root;
33    }
34
35    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
36        idx = postorder.size() - 1;
37        return solve(postorder, inorder, 0, inorder.size() - 1);
38    }
39};
40