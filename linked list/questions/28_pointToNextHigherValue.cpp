#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :

        Node* mergeTwoLists(Node* a, Node* b) {
            if(a==NULL) return b;
            if(b==NULL) return a;
            
            Node* newHead = NULL;
            if(a->val < b->val){
                newHead = a;
                newHead->next = mergeTwoLists(a->next, b);
            }else{
                newHead = b;
                newHead->next = mergeTwoLists(a,b->next);
            }
            return newHead;
        }
        Node* sortList(Node* head) {
            if(head==NULL || head->next==NULL) return head;
            /// break list into two
            Node *slow = head;
            Node *fast = head->next;
            while(fast && fast->next){
                slow = slow->next;
                fast = fast->next->next;
            }
            Node *n = slow->next; //assume that LL is odd;
            slow->next = NULL;
            
            Node* a = sortList(head);
            Node* b = sortList(n);
            
            head = mergeTwoLists(a,b);
            return head;
        }

        Node* arbitaryPointToNextGreaterEle(Node *head){
            if(head == NULL || head->next == NULL){
                return head;
            }
            Node *temp = head;
            while(temp){
                temp->random = temp->next;
                temp = temp->next;
            }

            sortList(head);

            return head;
        }
}