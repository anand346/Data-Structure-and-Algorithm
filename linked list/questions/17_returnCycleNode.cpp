#include<bits/stdc++.h>
using namespace std;


class Solution{


    public : 
        ListNode* detectCycle(ListNode* head){

            if(head == NULL ) return head;


            ListNode* slow = head, *fast = head;
            while(fast && fast->next){
                slow = slow->next;
                fast = fast->next->next;

                if(slow == fast) break;
            }

            if(!(fast && fast->next)) return NULL;

            while(head != slow){
                head = head->next;
                slow = slow->next;
            }

            return head;
        }
}


int main(){


}