1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11  bool hasCycle(ListNode *head) {
12    ListNode *slow = head;
13    ListNode *fast = head;
14
15    while(fast != NULL && fast->next != NULL){
16        slow = slow->next;          // 1 step
17        fast = fast->next->next;    // 2 steps
18
19        if(slow == fast) return true;
20    }
21    return false;
22}
23
24};