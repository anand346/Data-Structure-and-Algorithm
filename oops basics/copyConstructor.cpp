#include <iostream>
using namespace std;
class Student{
    int age ; //default private
    int rollNumber;  //default private
    public : 

        //if you maked a parameterised constructor do make a default constructor also
        //because the object will throw an error of not finding default constructor if
        Student (int a ,int b){  // parameterised constructor
            this->age = a;
            this->rollNumber = b;
        }
        void setAge(int a){
            this->age = a;
        }
        void getAge(){
            cout<<age<<endl;
        }
        ~ Student(){        //our destructor
            cout<<"destructor called "<<endl;
        }
};