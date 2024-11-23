// https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public :
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

class Solution{
    public :
        Node* reverseDLL(Node * head){
            //Your code here
            if(head == nullptr or head->next == nullptr)
                return head;
            Node * current = head;
            Node * next_ = nullptr;
            while(current){
                next_ = current->prev;
                current->prev = current->next;
                current->next = next_;
                current = current->prev;
            }
            return next_->prev;
            
        }
};

// 3 <--> 4 <--> 5