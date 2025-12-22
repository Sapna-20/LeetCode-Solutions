1class Solution {
2public:
3    Node* copyRandomList(Node* head) {
4        if (head == NULL) return NULL;
5
6        Node* curr = head;
7
8        // STEP 1: Insert copied nodes just after original nodes
9        // A -> B -> C
10        // becomes
11        // A -> A' -> B -> B' -> C -> C'
12        while (curr) {
13            Node* copy = new Node(curr->val);
14            copy->next = curr->next;
15            curr->next = copy;
16            curr = copy->next;
17        }
18
19        // STEP 2: Assign random pointers to copied nodes
20        // copy.random = original.random.next
21        curr = head;
22        while (curr) {
23            if (curr->random)
24                curr->next->random = curr->random->next;
25            curr = curr->next->next;
26        }
27
28        // STEP 3: Separate original list and copied list
29        curr = head;
30        Node* newHead = head->next;
31        while (curr) {
32            Node* copy = curr->next;
33            curr->next = copy->next;
34            if (copy->next)
35                copy->next = copy->next->next;
36            curr = curr->next;
37        }
38
39        return newHead;
40    }
41};
42