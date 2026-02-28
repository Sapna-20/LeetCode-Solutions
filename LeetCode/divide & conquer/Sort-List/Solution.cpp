1class Solution {
2public:
3    ListNode* sortList(ListNode* head) {
4
5        // base case
6        if (head == NULL || head->next == NULL)
7            return head;
8
9        // find middle using slow & fast pointer
10        ListNode* slow = head;
11        ListNode* fast = head;
12        ListNode* prev = NULL;
13
14        while (fast != NULL && fast->next != NULL) {
15            prev = slow;
16            slow = slow->next;
17            fast = fast->next->next;
18        }
19
20        // break the list
21        prev->next = NULL;
22
23        // sort both halves
24        ListNode* left = sortList(head);
25        ListNode* right = sortList(slow);
26
27        // merge sorted halves
28        return merge(left, right);
29    }
30
31    ListNode* merge(ListNode* l1, ListNode* l2) {
32
33        ListNode dummy(0);
34        ListNode* curr = &dummy;
35
36        while (l1 != NULL && l2 != NULL) {
37            if (l1->val <= l2->val) {
38                curr->next = l1;
39                l1 = l1->next;
40            } else {
41                curr->next = l2;
42                l2 = l2->next;
43            }
44            curr = curr->next;
45        }
46
47        if (l1 != NULL) curr->next = l1;
48        if (l2 != NULL) curr->next = l2;
49
50        return dummy.next;
51    }
52};
53