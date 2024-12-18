// https://www.youtube.com/watch?v=ua1bPxSV_H0
// https://www.geeksforgeeks.org/design-a-stack-with-find-middle-operation/

#include<bits/stdc++.h>
using namespace std;


class Node{

    Node* next;
    Node* prev;
    int data;

    public :
        Node(int x){
            data = x;
            next = prev = NULL;
        }
}


class Stack{

    Node* head;
    Node* middle;
    int cnt;

    public :

        Stack(){
            head = NULL;
            middle = NULL;
            cnt = 0;
        }

        void push(int data){
            Node* curr = new Node(data);
            curr->prev = NULL;
            curr->next = head;
            cnt++;
            head->prev = curr;
            head = curr;
            if(cnt == 1){
                mid = curr;
            }else if(cnt%2 == 0){
                mid = mid->prev;
            }
        }

        int pop(){

            if(cnt == 0){
                cout<<"STack is empty ";
                return ;
            }

            Node* temp = head;
            int x= head->data;
            head = head->next;
            if(head != NULL){
                head->prev = NULL;
            }
            cnt--;
            if(cnt&1){
                mid = mid->next;
            }
            delete temp;
            return x;
        }
        int middle(){
            if(cnt == 0){
                cout<<"STack is empty";
                return -1;
            }
            return mid->data;

        }

        void printData(){
            Node* curr = head;
            if(cnt == 0){
                cout<<"Stack is empty ";
                return ;
            }

            for(int i = 0;i < cnt;i++){
                cout<<curr->data<<" ";
                curr = curr->next;
            }
            cout<<endl;
        }
}

