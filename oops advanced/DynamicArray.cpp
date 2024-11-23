#include<iostream>
using namespace std;
class DynamicArray{
    int *data; //dynamic array to store int data;
    int nextIndex; //position to insert
    int capacity; //total storage

    public : 
        DynamicArray(){ //constructor with no parameter
            data = new int[5];
            nextIndex = 0;
            capacity = 5;
        }
        DynamicArray(int c){ //constructor with 1 parameter
            data = new int[c];
            capacity = c;
            nextIndex = 0;
        }
        DynamicArray(DynamicArray const &d){ //own copy constructor
            this->nextIndex = d.nextIndex;
            this->capacity = d.capacity;
            this->data = new int[d.capacity];
            for(int i =0 ; i < d.nextIndex; i++){
                this->data[i] = d.data[i];
            }
        }
        void operator=(DynamicArray const &d){ //own copy assignment overloading
            this->nextIndex = d.nextIndex;
            this->capacity = d.capacity;
            this->data = new int[d.capacity];
            for(int i =0 ; i < d.nextIndex; i++){
                this->data[i] = d.data[i];
            }
        }
        void add(int element){ //function with 1 parameter
            if(nextIndex == capacity){
                int *newData = new int[2*capacity];
                for(int i =0; i < capacity; i++){
                    newData[i] = data[i];
                }
                delete []data;
                data = newData;
                capacity = capacity*2;
            }
            data[nextIndex] = element;
            nextIndex++;
        }
        void add(int element , int i){ //function with 2 parameter
            if(i < nextIndex){
                data[i] = element;
            }else if(i == nextIndex){
                add(element);
            }else{
                return ;
            }
        }
        int getElement(int i) const{
            if(i >= 0 && i < nextIndex){
                return data[i];
            }else{
                return -1;
            }
        }
        int getCapacity() const{
            return capacity;
        }
        void print() const{
            for(int i =0; i < nextIndex; i++){
                cout<<data[i]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.add(70);
    cout<<d1.getCapacity()<<endl;
    DynamicArray d2(d1);
    d2.add(100,0);
    d1.print();
    d2.print();
    d1.print();
    cout<<d1.getElement(0)<<endl;
}