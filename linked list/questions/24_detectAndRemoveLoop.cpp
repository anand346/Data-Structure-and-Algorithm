#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :

        void removeLoop(ListNode *slow,ListNode* head){
            ListNode *ptr1 = slow;
            ListNode *ptr2 = slow;

            int k = 1;

            while(ptr1->next != ptr2){
                ptr1 = ptr1->next;
                k++;
            }

            ptr1 = head;
            ptr2 = head;

            for(int i = 0;i < k;i++){
                ptr2 = ptr2->next;
            }

            while(ptr2 != ptr1){
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }

            while(ptr2->next != ptr1){
                ptr2 = ptr2->next;
            }

            ptr2->next = NULL;
        }

        int detectAndRemoveLoop(ListNode* head){

            ListNode* slow = head;
            ListNode* fast = head;

            while(fast && fast->next){
                slow = slow->next;
                fast = fast->next->next;

                if(slow == fast){
                    removeLoop(slow,head);
                    return 1;
                }
            }
            return 0;
        }
}

int main(){

}