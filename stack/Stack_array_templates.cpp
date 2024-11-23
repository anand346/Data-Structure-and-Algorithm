#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Stack{
    T *arr;
    int nextIndex;
    int capacity;
    public :
        Stack(){
            capacity = 4;
            arr = new T[capacity];
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
        void push(T element){
            if(nextIndex == capacity){
                T *newArray = new T[2*capacity];
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
        T top(){
            if(isEmpty()){
                cout<<"Stack is full "<<endl;
                return 0;
            }
            return arr[nextIndex - 1];
        }
};
int main(){
    //Stack<int> s1;
    // for(int i = 1;i <= 10;i++){
    //     s1.push(i);
    // }
    Stack<char> s1;
    s1.push(100);
    s1.push(102);
    s1.push(103);
    s1.push(104);
    while(!s1.isEmpty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    cout<<"size is : "<<s1.size()<<endl;
}