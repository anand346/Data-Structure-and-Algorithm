// https://www.geeksforgeeks.org/sort-biotonic-doubly-linked-list/

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :

        Node* last_node(Node* head){
            while(head != NULL && head->next != NULL){
                head = head->next;
            }
            return head;
        }

        void swap(Node* a,Node* b){
            int temp=a->data;
            a->data=b->data;
            b->data=temp;
        }

        Node* partition(Node* l,Node* h){
            Node* pivot=l;
            Node* left=l;
            Node* right=h;
            bool flag=false;
            while(!flag){       
                while(left!=null && left->data<=pivot->data){
                    if(left==right)flag=true;
                    left=left->next;
                }
                while(right!=null && right->data>pivot->data){
                    if(right==left)flag=true;
                    right=right->prev;
                }
                if(!flag) swap(left,right);
            }
            swap(pivot,right);
            return right;
        }

        void _quickSort(Node* left,Node* right){
            if(right != NULL && left != right && left != right->next){
                Node *parti = partition(left,right);
                _quickSort(left,parti->prev);
                _quickSort(parti->next,right);
            }
        }

        void quickSort(Node *head){
            Node* right = last_node(head);
            _quickSort(head,right);
        }
}