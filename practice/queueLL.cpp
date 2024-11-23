#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int size;
    int capacity;
    int firstIndex;
    int nextIndex;
    public :
        Queue(){
            size = 0;
            capacity = 5;
            firstIndex = -1;
            lastIndex = 0;
            arr = new int[capacity];
        }
        Queue(int cap){
            size = 0;
            capacity = cap;
            firstIndex = -1;
            lastIndex = 0;
            arr = new int[capacity];
        }
        int getSize(){
            return size;
        }
        bool isEmpty(){
            return size==0;
        }
        void push(int element)[
            if(lastIndex == capacity){
                int *newArr = new int[2*capacity];
                for(int i = firstIndex; i < lastIndex ; i++){
                    newArr[i]
                }
            }
        ]

}
int main(){

}