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
14    int idx = 0;   // tracks preorder index
15
16    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,
17                    int start, int end) {
18
19        if (start > end) return NULL;
20
21        // pick root from preorder
22        TreeNode* root = new TreeNode(preorder[idx++]);
23
24        // find root in inorder
25        int pos = start;
26        while (inorder[pos] != root->val) pos++;
27
28        // build left and right
29        root->left  = solve(preorder, inorder, start, pos - 1);
30        root->right = solve(preorder, inorder, pos + 1, end);
31
32        return root;
33    }
34
35    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
36        return solve(preorder, inorder, 0, inorder.size() - 1);
37    }
38};
39