class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for (auto l : lists) {
            while (l) {
                pq.push(l->val);
                l = l->next;
            }
        }
        
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        
        while (!pq.empty()) {
            temp->next = new ListNode(pq.top());
            pq.pop();
            temp = temp->next;
        }
        
        return dummy->next;
    }
};