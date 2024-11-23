// https://www.youtube.com/watch?v=_v8O9TZwKSU

// https://www.geeksforgeeks.org/a-linked-list-with-next-and-arbit-pointer/

#include<bits/stdc++.h>
using namespace std;

class Solution{

    public :
        Node* copyList(Node* head){
            Node* curr = head;
            Node* temp;

            while(curr){
                temp = curr->next;
                curr->next = new Node(curr->data);
                curr->next->next = temp;
                curr = temp;
            }

            curr = head;
            while(curr){
                curr->next->arb = curr->arb ? curr->arb->next : curr->arb;
                curr = curr->next->next;
            }

            Node* original = head;
            Node* copy = head->next;
            temp = copy;
            while(original and copy){
                original->next = original->next->next;
                copy->next = copy->next ? copy->next->next : copy->next;
                original = original->next;
                copy = copy->next;
            }

            return temp;
        }
}