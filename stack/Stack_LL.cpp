#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Node{
  public:
    T data;
    Node<T> *next;
    Node(T data){
        this->data = data;
        next = NULL;
    }
} ;
template<typename T>
class Stack{
    Node<T> *head;
    int size;
    public : 
        Stack(){
            head = NULL;
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
            n->next = head;
            head = n;
            size++;
        }
        void pop(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return ;
            }
            Node<T> *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            size--;
        }
        T top(){    
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return 0;
            }
            return head->data;
        }
};
int main(){
    Stack<char> s1;
    s1.push(100);
    s1.push(102);
    s1.push(103);
    s1.push(104);
    while(!s1.isEmpty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    cout<<"size is : "<<s1.getSize()<<endl;
}