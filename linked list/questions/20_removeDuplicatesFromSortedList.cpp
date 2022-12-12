#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void removeDuplicates(Node *head){
        Node *current = head;
        Node *next_next;
        if (current == NULL) return;
        while (current->next != NULL){
            if (current->data == current->next->data){
                next_next = current->next->next;
                Node *nextHead = current->next;
                nextHead->next = NULL;
                delete nextHead;
                current->next = next_next;
            }else{
                current = current->next;
            }
        }
    }
}
