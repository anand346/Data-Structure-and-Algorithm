// https://practice.geeksforgeeks.org/problems/subtraction-in-linked-list/1

#include<bits/stdc++.h>
using namespace std;


class Solution{

    public : 
        int len(Node *head){
            int count = 0;
            Node *curr = head;
            
            while(curr)
            {
                count++;
                curr = curr->next;
            }
            return count;
        }

        Node *reverse(Node *head){
            Node *curr = head, *prev = NULL, *next = NULL;
            
            while(curr)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            
            return prev;
        }


        Node* subLinkedList(Node* l1, Node* l2){
            // removing trailing zeroes
            while(l1 && l1->data == 0)
                l1 = l1->next;
                
            while(l2 && l2->data == 0)
                l2 = l2->next;
                
            // calculating length
            int n1 = len(l1);
            int n2 = len(l2);
            
            // making l1 list greater
            if(n1 < n2)
                swap(l1, l2);
                
            if(n1 == n2)
            {
                Node *t1=l1, *t2=l2;
                
                while(t1->data == t2->data)
                {
                    t1 = t1->next;
                    t2 = t2->next;
                    
                    if(!t1)
                        return new Node(0); // return 0 if both are same
                }
                
                if(t2->data > t1->data)
                    swap(l1, l2);
            }
            
            // reversing both lists
            l1 = reverse(l1);
            l2 = reverse(l2);
            
            Node *res = NULL;
            Node *t1=l1, *t2=l2;
            
            while(t1)
            {
                int small = 0;
                
                if(t2)
                    small = t2->data;
                    
                if(t1->data < small)
                {
                    t1->next->data -= 1;
                    t1->data += 10;
                }
                
                Node *n = new Node(t1->data - small);
                n->next = res;
                res = n;
                
                t1 = t1->next;
                if(t2)
                    t2 = t2->next;
            }
            
            // removing trailing zeroes
            while(res && res->data == 0)
                res = res->next;
                
            return res;
            
        }
}