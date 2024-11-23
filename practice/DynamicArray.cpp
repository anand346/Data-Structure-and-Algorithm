#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class DynamicArray{
    int *data;
    int capacity;
    int nextIndex;
    public :
       DynamicArray(){
           data = new int[5];
           capacity  = 5;
           nextIndex = 0;
       } 
       DynamicArray(int c){
           data = new int[c];
           capacity = c;
           nextIndex = 0;
       }
       DynamicArray(DynamicArray const &d){
           data = new int[d.capacity];
           capacity = d.capacity;
           nextIndex = d.nextIndex;
           for(int i = 0;i < d.nextIndex; i++){
               data[i] = d.data[i];
           }
       }
       void operator=(DynamicArray const &d){
           data = new int[d.capacity];
           capacity = d.capacity;
           nextIndex = d.nextIndex;
           for(int i = 0;i < d.nextIndex; i++){
               data[i] = d.data[i];
           }
       }
       void add(int element){
           if(nextIndex == capacity){
               int *newData = new int[2*capacity];
               capacity = 2*capacity;
               for(int i = 0;i < nextIndex; i++){
                   newData[i] = data[i];
               }
               delete []data;
               data = newData;
           }
            data[nextIndex]  = element;
            nextIndex++;
       }
       void add(int element,int i){
           if(i >= 0 && i < nextIndex){
               data[i] = element;
           }else if(i == nextIndex){
               add(element);
           }else{
               return ;
           }
       }
       int getElement(int i){
           return data[i];
       }
       int getCapacity(int i){
           return capacity;
       }
       void print(){
           for(int i = 0; i < nextIndex ; i++){
               cout<<data[i]<<" ";
           }
           cout<<endl;
       }
}
int main(){

}