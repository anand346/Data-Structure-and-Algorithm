#include <iostream>
#include "student.cpp"
using namespace std;
int main(){
    // Student s1; //default constructor called

    Student s1 ; //default constructor called
    Student *s2 = new Student;
    s1.setAge(32);
    s1.getAge();
    s2->setAge(54);
    s2->getAge();




}