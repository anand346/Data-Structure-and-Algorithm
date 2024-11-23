/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if(a==NULL) return b;
        if(b==NULL) return a;
        
        ListNode* newHead = NULL;
        if(a->val < b->val){
            newHead = a;
            newHead ->next = mergeTwoLists(a->next, b);
        }else{
            newHead = b;
            newHead->next = mergeTwoLists(a,b->next);
        }
        
        return newHead;
    }
};