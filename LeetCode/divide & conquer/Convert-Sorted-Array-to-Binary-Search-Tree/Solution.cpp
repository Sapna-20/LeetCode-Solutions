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
14    TreeNode* sortedArrayToBST(vector<int>& nums) {
15    return build(nums, 0, nums.size() - 1);
16}
17
18TreeNode* build(vector<int>& nums, int left, int right) {
19    if (left > right) return nullptr;
20
21    int mid = left + (right - left) / 2;
22    TreeNode* root = new TreeNode(nums[mid]);
23
24    root->left = build(nums, left, mid - 1);
25    root->right = build(nums, mid + 1, right);
26
27    return root;
28}
29
30};