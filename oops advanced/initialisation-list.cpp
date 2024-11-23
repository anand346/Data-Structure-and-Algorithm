#include <iostream>
#include <cstring>
using namespace std;
class Student{
    public : 
        int age;
        int const rollNumber;
        int &a;
        Student(int r,int age):rollNumber(r),age(age),a(this->age){ //initialisation list 
            cout<<age<<" "<<rollNumber<<endl;
            cout<<"value of a is : "<<a;
        }
};
int main(){
    Student s1(5,20);
}
