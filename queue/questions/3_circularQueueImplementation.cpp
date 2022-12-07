#include<bits/stdc++.h>
using namespace std;


class Queue{

    int rear ;
    int front ;
    int *arr;
    int size ;

    public :

        Queue(){
            size = 5;
            arr = new int[size];

            rear = -1;
            front = -1;

        }

        bool isFull(){
            if(front == 0 && rear == size-1){
                return true;
            }else if(front == rear+1){
                return true;
            }
            return false;
        }


        bool isEmpty(){
            if(front == -1){
                return true;
            }else{
                return false;
            }
        }

        void enQueue(int element){
            if(isFull()){
                cout<<"Queue is full";
                return ;
            }

            if(front == -1) front = 0;
            rear = (rear+1)%size;
            items[rear] = element;

        }

        int deQueue(){
            int element;

            if(isEmpty()){
                cout<<"Queue is empty";
                return -1;
            }

            element = arr[front];
            if(front == rear){
                front = -1;
                rear = -1;
            }else{
                front = (front+1)%size;
            }

            return element;
        }

        void display(){
            if(isEmpty()){
                cout<<"Queue is empty";
                return ;
            }

            for(int i = front ;i != rear;i = (i+1)%size){
                cout<<arr[i]
            }
        }

}