#include <iostream>
using namespace std;
class Student{
    int age ; //default private
    int rollNumber;  //default private
    public : 
        void setAge(int a){
            age = a;
        }
        void getAge(){
            cout<<age<<endl;
        }
};