#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(ListNode* head) {
    if(head == NULL || head->next == NULL) return true;

    ListNode* slow = head;
    ListNode* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* reversed = NULL;
    while(slow != NULL){
        ListNode* next = slow->next;
        slow->next = reversed;
        reversed = slow;
        slow = next;
    }

    while(reversed != NULL){
        if(head->val != reversed->val) return false;
        head = head->next;
        reversed = reversed->next;
    }

    return true;

}

//  bool isPalindrome(ListNode* head) {
//     ListNode *slow = head, *fast = head, *prev, *temp;
//     while (fast && fast->next)
//         slow = slow->next, fast = fast->next->next;
//     prev = slow, slow = slow->next, prev->next = NULL;
//     while (slow)
//         temp = slow->next, slow->next = prev, prev = slow, slow = temp;
//     fast = head, slow = prev;
//     while (slow)
//         if (fast->val != slow->val) return false;
//         else fast = fast->next, slow = slow->next;
//     return true;
// }
int main(){

}