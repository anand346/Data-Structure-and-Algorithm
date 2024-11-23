// https://leetcode.com/problems/reorder-list/


#include<bits/stdc++.h>

class Solution{

    public :
        void reorderLL(ListNode *head){
            if(!head || !head->next || !head->next->next) return ;

            ListNode *ptr = head;

            stack<ListNode*> st;
            int size = 0;
            while(ptr){
                st.push(ptr);
                size++;
                ptr = ptr->next;
            }

            ListNode *pptr = head;
            for(int i = 0;i < size/2;i++){
                ListNode* element = st.top();
                st.pop();
                element->next = pptr->next;
                pptr->next = element;
                pptr = pptr->next->next;
            }

            pptr->next = NULL;
        }

}