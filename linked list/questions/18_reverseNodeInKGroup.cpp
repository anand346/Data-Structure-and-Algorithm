// https://leetcode.com/problems/reverse-nodes-in-k-group/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    

    public :
        void reverseList(ListNode* s,ListNode *e){
            ListNode *p = NULL ,*c = s;
            while(p != e){
                ListNode *n = c->next;
                c->next = p;
                p = c;
                c = n;
            }
        }
        
        ListNode* reverseKGroup(ListNode* head, int k) {
            if(head == NULL || head->next == NULL || k == 1) return head;

            ListNode *s = head,*e = head;
            int inc = k-1;
            while(inc--){
                e = e->next;
                if(e == NULL) return head;
            }

            ListNode *nextHead = reverseKGroup(e->next,k);
            reverseList(s,e);
            s->next = nextHead;
            return e;
        }
}


int main(){

}