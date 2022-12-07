// https://www.geeksforgeeks.org/delete-nodes-which-have-a-greater-value-on-right-side/

// https://www.youtube.com/watch?v=cI3P6L6xgpY
#include<bits/stdc++.h>
using namespace std;


class Solution{

    public:
    
    Node* reverseLL(Node* head){
        
        Node *curr = head;
        Node *prev = NULL;
        while(curr != NULL){
            Node *n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        Node *newHead = reverseLL(head);
        Node *curr = newHead;
        Node *prev = newHead;
        int maxSoFar = newHead->data;
        newHead = newHead->next;
        while(newHead != NULL){
            if(newHead->data >= maxSoFar){
                maxSoFar = newHead->data;
                prev = newHead;
                newHead = newHead->next;
            }else{
                prev->next=newHead->next;
                newHead=prev->next;
            }
        }
        Node *prevHead = reverseLL(newHead);
        return prevHead;
    }
}