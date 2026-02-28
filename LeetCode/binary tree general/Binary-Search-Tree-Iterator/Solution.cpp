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
12class BSTIterator {
13private:
14    stack<TreeNode*> st;
15
16    // push all left nodes starting from given node
17    void pushLeft(TreeNode* node) {
18        while (node != NULL) {
19            st.push(node);
20            node = node->left;
21        }
22    }
23
24public:
25    BSTIterator(TreeNode* root) {
26        // initial step: go to leftmost
27        pushLeft(root);
28    }
29
30    int next() {
31        // top of stack is next smallest
32        TreeNode* curr = st.top();
33        st.pop();
34
35        // if right child exists, process its leftmost path
36        if (curr->right != NULL) {
37            pushLeft(curr->right);
38        }
39
40        return curr->val;
41    }
42
43    bool hasNext() {
44        return !st.empty();
45    }
46};
47
48
49/**
50 * Your BSTIterator object will be instantiated and called as such:
51 * BSTIterator* obj = new BSTIterator(root);
52 * int param_1 = obj->next();
53 * bool param_2 = obj->hasNext();
54 */