#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Node{
    public :
    T data;
    Node<T> *next;
    Node(T data){
        this->data = data;
        next = NULL;
    }
};
template<typename T>
class Queue{
    Node<T> *head;
    Node<T> *tail;
    int size;
    public :
        Queue(){
            head = NULL;
            tail = NULL;
            size = 0;
        }
        int getSize(){
            return size;
        }
        bool isEmpty(){
            return size == 0;
        }
        void push(T element){
            Node<T> *n = new Node<T>(element);
            if(head == NULL){
                head = n;
                tail = n;
            }else{
                tail->next = n;
                tail = n;
            }
            size++;
        }
        void pop(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return ;
            }
            Node<T> *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            size--;
        }
        T front(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return 0;
            }
            return head->data;
        }
};
int main(){
    Queue<int> q1;
    q1.push(100);
    q1.push(101);
    q1.push(102);
    q1.push(103);
    q1.push(104);
    q1.push(105);
    cout<<q1.getSize()<<endl;
    q1.pop();
    q1.pop();
    while(!q1.isEmpty()){
        cout<<q1.front()<<endl;
        q1.pop();
    }
    cout<<q1.getSize()<<endl;
}