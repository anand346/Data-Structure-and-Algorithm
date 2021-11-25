#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    int *arr;
    int nextIndex;
    int capacity;
    public :
        Stack(){
            capacity = 4;
            arr = new int[capacity];
            nextIndex = 0;
        }
        int size(){
            return nextIndex;
        }
        bool isEmpty(){
            return nextIndex==0;
        }
        void pop(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return ;
            }
            nextIndex--;
        }
        void push(int element){
            if(nextIndex == capacity){
                int *newArray = new int[2*capacity];
                for(int i = 0;i < capacity; i++){
                    newArray[i] = arr[i];
                }
                delete []arr;
                arr = newArray;
                capacity = 2*capacity;
            }
            arr[nextIndex] = element;
            nextIndex++;
        }
        int top(){
            if(isEmpty()){
                cout<<"Stack is full "<<endl;
                return -1;
            }
            return arr[nextIndex - 1];
        }
};
int main(){
    Stack s1;
    for(int i = 1;i <= 10;i++){
        s1.push(i);
    }
    while(!s1.isEmpty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    cout<<"size is : "<<s1.size()<<endl;
}