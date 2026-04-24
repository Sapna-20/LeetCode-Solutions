class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;
        while(curr && count < k){
            curr = curr->next;
            count++;
        }
        if(count < k) return head;
        
        curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        count = 0;
        
        while(curr && count < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(next) head->next = reverseKGroup(next, k);
        
        return prev;
    }
};