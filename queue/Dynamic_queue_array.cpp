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
        int getSize(){
            return size;
        }
        bool isEmpty(){
            return size == 0;
        }
        void push(T element){
            if(size == capacity){
                T *newArray = new T[2*capacity];
                int j = 0;
                for(int i = firstIndex; i< capacity;i++){
                    newArray[j] = arr[i];
                    j++;
                }
                for(int i = 0;i < firstIndex;i++){
                    newArray[j] = arr[i];
                    j++;
                }
                nextIndex = capacity;
                firstIndex = 0;
                capacity = 2*capacity;
                delete []arr;
                arr = newArray;
            }
            arr[nextIndex] = element;
            nextIndex = (nextIndex +1)%capacity;
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
            firstIndex = (firstIndex + 1)%capacity;
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
    Queue<int> q1;
    q1.push(100);
    q1.push(101);
    q1.push(102);
    q1.push(103);
    q1.push(104);
    q1.push(105);
    q1.push(106);
    cout<<q1.getSize()<<endl;
    while(!q1.isEmpty()){
        cout<<q1.front()<<endl;
        q1.pop();
    }
    cout<<q1.getSize();
}