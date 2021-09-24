#include <iostream>
using namespace std;
class Student{
    public : 
        int age;
        int rollNumber;
        static int totalStudents;
        Student(){
            totalStudents++;
        }

        static getTotalStudents(){
            return totalStudents;
        }
};

int Student::totalStudents = 0;

int main(){
    Student s1,s2,s3,s4,s5;
    cout<<"total students are : "<<Student::totalStudents<<endl;
    cout<<"total students are : "<<Student::getTotalStudents()<<endl;
}