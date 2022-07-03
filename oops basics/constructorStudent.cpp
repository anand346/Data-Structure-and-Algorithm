#include <iostream>
using namespace std;
class Student{
    int age ; //default private
    int rollNumber;  //default private
    public : 

        //if you maked a parameterised constructor do make a default constructor also
        //because the object will throw an error of not finding default constructor if
        //any object has used default constructor
        Student (){  // default constructor
            cout<<"default constructor called "<<endl;
        }
        Student (int a){  // parameterised constructor
            age = a;
        }
        Student (int a ,int b){  // parameterised constructor
            age = a;
            rollNumber = b;
        }
        void setAge(int a){ //setters
            age = a;
        }
        void getAge(){ //getters
            cout<<age<<endl;
        }
};