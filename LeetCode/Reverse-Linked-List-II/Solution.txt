1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14    if (!head || left == right) return head;
15
16    ListNode dummy(0);
17    dummy.next = head;
18    ListNode* prev = &dummy;
19
20    // Step 1: move prev to just before left
21    for (int i = 1; i < left; i++) {
22        prev = prev->next;
23    }
24
25    // Step 2: reverse from left to right
26    ListNode* curr = prev->next;
27    for (int i = 0; i < right - left; i++) {
28        ListNode* next = curr->next;
29        curr->next = next->next;
30        next->next = prev->next;
31        prev->next = next;
32    }
33
34    return dummy.next;
35}
36
37};