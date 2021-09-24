#include <iostream>
#include <cstring>
using namespace std;
class Student{
    int age;
    char *name;

    public :
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
}
