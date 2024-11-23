#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :
        int multiplyTwoList(ListNode* l1,ListNode *l2){


            int num1 = 0,num2 = 0;
            while(l1 || l2){
                if(l1){
                    num1 = num1*10 + l1->data;
                    l1 = l1->next;
                }
                if(l2){
                    num2 = num2*10 + l2->data;
                    l2 = l2->next;
                }
            }

            return num1*num2;
        }
}