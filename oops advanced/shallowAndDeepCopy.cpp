#include <iostream>
#include <cstring>
using namespace std;
class Student{
    public :
        int age;
        char *name;
        Student(Student const &s){
            this->age = s.age;
            this->name = new char[strlen(s.name) + 1];
            strcpy(this->name,s.name);
        }
        Student(int age , char *name){
            this->age = age;
            // this->name = name; // shallow copy
            this->name = new char[strlen(name) + 1]; // deep copy
            strcpy(this->name,name);
        }
        void print(){
            cout<<this->name<<" "<<this->age<<endl;
        }
};
int main(){
    char name[] = "anand";
    Student s1(10,name);
    s1.print();
    name[4] = 'e';
    Student s2(20,name);
    s2.print();
    s1.print();
    Student s3(s1);
    s3.name[0] = 'b';
    s3.print();
    s1.print(); 
    //copy constructor will always make shallow copy
    //copy assignment operator always make a shallow copy
}
