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
14    int count = 0;
15    int answer = -1;
16
17    void inorder(TreeNode* root, int k) {
18        if (root == NULL) return;
19
20        inorder(root->left, k);
21
22        count++;
23        if (count == k) {
24            answer = root->val;
25            return;
26        }
27
28        inorder(root->right, k);
29    }
30
31    int kthSmallest(TreeNode* root, int k) {
32        inorder(root, k);
33        return answer;
34    }
35};
36