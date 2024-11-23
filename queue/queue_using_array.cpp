#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Queue{
    T *arr;
    int capacity;
    int size;
    int firstIndex;
    int nextIndex;
    public :
        Queue(){
            capacity = 5;
            arr = new T[capacity];
            firstIndex = -1;
            nextIndex = 0;
            size = 0;
        }
        Queue(int capacity){
            arr = new T[capacity];
            firstIndex = -1;
            nextIndex = 0;
            size = 0;
        }
        int getSize(){
            return size;
        }
        bool isEmpty(){
            return size == 0;
        }
        void push(T element){
            if(size == capacity){
                cout<<"Queue full"<<endl;
                return ;
            }
            arr[nextIndex] = element;
            nextIndex = (nextIndex + 1)%capacity;
            size++;
            if(firstIndex == -1){
                firstIndex = 0;
            }
        }
        void pop(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return ;
            }
            firstIndex = (firstIndex +1)%capacity;
            size--;
            if(size == 0){
                firstIndex = -1;
                nextIndex = 0;
            }
        }
        T front(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return 0;
            }
            return arr[firstIndex];
        }
};
int main(){
    Queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.getSize()<<endl;
    q.pop();
    while(!q.isEmpty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<q.getSize()<<endl;
}