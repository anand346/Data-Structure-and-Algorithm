#include<bits/stdc++.h>
using namespace std;


class Node{

    public :
        Node* next;
        Node* prev;
        int val;

        Node(int element){
            val = element;
            next = NULL;
            prev = NULL;
        }
}

class Deque{

    public :
        Node* head;
        Node* tail;
        int size;

        Deque(){
            head = NULL;
            tail = NULL;
            size = 0;
        }


        bool isEmpty(){
            return head == tail == NULL;
        }

        int size(){
            return size;
        }

        void insert_first(int element){

            Node* temp = new Node(element);
            
            if(head == NULL){
                head = tail = temp;
                temp->next = NULL;
                temp->prev = NULL;
            }else{
                head->prev = temp;
                temp->next = head;
                temp->prev = NULL;
                head = temp;
            }

            size++;
        }

        void insert_last(int element){

            Node* temp = new Node(element);

            if(tail == NULL){
                head = tail = temp;
                temp->next = NULL;
                temp->prev = NULL; 
            }else{
                tail->next = temp;
                temp->prev = tail;
                temp->next = NULL;
                tail = temp;
            }

            size++;
        }

        void remove_first(){

            if(head == NULL){
                cout<<"list is empty";
                return ;
            }

            Node* temp = head;
            head = head->next;
            if(head) head->prev = NULL;
            if(head == NULL) tail = NULL;
            delete temp;

            size--;
            return ;
        }


        void remove_last(){
            if(tail == NULL){
                cout<<"list is empty";
                return ;
            }

            Node* temp = tail;
            tail = tail->prev;
            if(tail) tail->next = NULL;
            if(!tail) head = NULL;
            delete temp;
            size--;
            return ;
        }

        void display(){

            if(!isEmpty()){
                Node* temp = head;
                while(!temp){
                    cout<<temp->val<<" ";
                    temp = temp->next;
                }
                return;
            }
            cout<<"list is empty";
            return ;

        }

        int getFirst(){

            if(!isEmpty()){
                return head->val;
            }
            return -1;
        }
        int getLast(){

            if(!isEmpty()){
                return tail->val;
            }
            return -1;
            
        }
}


class Stack : public Deque{

    public :
        void push(int element){
            insert_last(element);
        }

        void pop(int element){
            remove_last();
        }

        int top(){
            getLast();
        }
}

class Queue : public Deque{

    public :
        void push(int element){
            insert_first(element);
        }

        void pop(){
            remove_first();
        }

        int front(){
            getFirst();
        }
}