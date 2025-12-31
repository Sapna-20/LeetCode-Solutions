1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* left;
7    Node* right;
8    Node* next;
9
10    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
11
12    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
13
14    Node(int _val, Node* _left, Node* _right, Node* _next)
15        : val(_val), left(_left), right(_right), next(_next) {}
16};
17*/
18
19class Solution {
20public:
21    Node* connect(Node* root) {
22        if (!root) return NULL;
23
24        Node* curr = root;
25
26        while (curr) {
27            Node dummy(0);
28            Node* tail = &dummy;
29
30            while (curr) {
31                if (curr->left) {
32                    tail->next = curr->left;
33                    tail = tail->next;
34                }
35                if (curr->right) {
36                    tail->next = curr->right;
37                    tail = tail->next;
38                }
39                curr = curr->next;
40            }
41
42            curr = dummy.next;
43        }
44
45        return root;
46    }
47};