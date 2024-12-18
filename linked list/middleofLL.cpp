class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ListNode* slow = head;
         ListNode* fast = head->next;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next; 
        }
        if(fast!=NULL){  /// odd
            return slow->next;
        }
        return slow;  /// even
    }
};