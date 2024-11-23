#include <iostream>
#include "constructorStudent.cpp"
using namespace std;
int main(){
    // Student s1; //default constructor called

    Student s1(20); //parameterised constructor with 1 parameter is called
    Student *s2 = new Student(10,100); //parameterised constructor with 2 parameter is called
    s1.setAge(32);
    s1.getAge();
    // s2->setAge(54);
    s2->getAge();




}