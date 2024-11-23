#include<bits/stdc++.h>
using namespace std;


//two pointer approach
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *ptr1 = headA;
    ListNode *ptr2 = headB;
    while(ptr1 != ptr2){
        if(ptr1 == NULL){
            ptr1 = headB;   
        }else{
            ptr1 = ptr1->next;
        }
        if(ptr2 == NULL){
            ptr2 = headA;
        }else{
            ptr2 = ptr2->next;
        }
    }
    return ptr1;
}


//hashmap approach
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    unordered_map<ListNode*, int> m;
    while(headA != NULL){
        m[headA]++;
        headA = headA->next;
    }
    while(headB != NULL){
        if(m[headB] > 0){
            return headB;
        }
        headB = headB->next;
    }
    return NULL;
}


// length approach

int length(ListNode *head){
    ListNode* temp = head;
    int len = 1;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

    int l1 = length(headA);
    int l2 = length(headB);

    int d = 0;
    ListNode* ptr1;
    ListNode* ptr2;
    if(l1 > l2){
        ptr1 = headA;
        ptr2 = headB;
        d = l1-l2;
    }else{
        ptr1 = headB;
        ptr2 = headA;
        d = l2-l1;
    }

    while(d){
        if(ptr1 == NULL){
            return -1;
        }
        ptr1 = ptr1->next;
        d--;
    }

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 == ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}
int main(){

}