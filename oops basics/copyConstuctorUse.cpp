#include <iostream>
#include "copyConstructor.cpp"
using namespace std;
int main(){
    // Student s1; //default constructor called
    //copy constructor copies the values of properties of 1 object into another object
    //every object has 1 default constructor and 1 default copy constructor  
    //copy constructor or constructor are called only once at the time of creation of object

    Student s1(20,100); //parameterised constructor with 1 parameter is called
    Student s2(s1); //default copy constructor will be called
    Student *s3 = new Student(50,200); //default constructor is called
    Student *s4 = new Student(*s3);
    Student *s5 = new Student(s1);
    Student s6(*s3);
    cout<<"s1 age : "<<endl;
    s1.getAge();
    cout<<"s2 age : "<<endl;
    s2.getAge();
    cout<<"s3 age : "<<endl;
    s3->getAge();
    cout<<"s4 age : "<<endl;
    s4->getAge();
    cout<<"s5 age : "<<endl;
    s5->getAge();
    cout<<"s6 age : "<<endl;
    s6.getAge();


    //copy assignment operator

    Student s7(10,20) ;
    cout<<"s7 age : "<<endl;
    s7.getAge();
    Student *s8 = new Student(100,500);
    cout<<"s8 age : "<<endl;
    s8->getAge(); 
    s7 = s1;
    cout<<"After copying s1 value in s7 : "<<endl;
    s7.getAge(); 
    *s8 = s1;
    cout<<"After copying s1 value in s8 : "<<endl;
    s8->getAge();
    s2 = *s8;
    cout<<"After copying s8 value in s2 : "<<endl;
    s2.getAge();

    //destructor for static object is automatically called when scope of static object is finished
    //for calling the destructor for dynamic object we use delete keyword

    delete s8; //now destructor will called 5 times //4 times automatically for static object and 1 time for s8(dynamic ) object by delete keyword;
    return 0;
}