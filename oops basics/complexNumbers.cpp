#include <iostream>
using namespace std;
class ComplexNumber{
    int real;
    int imaginery;

    public :
        ComplexNumber(int real,int imaginery){
            this->real = real;
            this->imaginery = imaginery;
        } 
        void print(){
            cout<<this->real<<" + i"<<this->imaginery<<endl;
        }

        void plus(ComplexNumber const &c2){
            int x = this->real + c2.real;
            int y = this->imaginery + c2.imaginery;
            this->real = x;
            this->imaginery = y;
        }
        void multiply(ComplexNumber const &c2){
            int x = this->real*c2.real - this->imaginery*c2.imaginery;
            int y = this->real*c2.imaginery + this->imaginery*c2.real;
            this->real = x;
            this->imaginery = y;
        }
};


int main(){


    int real1, imaginery1, real2, imaginery2;
    cout<<"Enter complex number 1 : ";
    cin>>real1>>imaginery1;
    cout<<"Enter complex number 2 : ";
    cin>>real2>>imaginery2;

    ComplexNumber c1(real1,imaginery1);
    ComplexNumber c2(real2,imaginery2);


    cout<<"Enter your choice : ";
    int choice;
    cin>>choice;

    if(choice == 1){
        c1.plus(c2);
        c1.print();
    }else if(choice == 2){
        c1.multiply(c2);
        c1.print();
    }else{
        return 0;
    }
}