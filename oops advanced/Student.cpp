
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
class Student{
    int age;
    char *name;
    public : 
        Student(int age, char *name){
            this->age = age;
            this->name = name; //shallow copy
        }
        void print(){
            cout<<age<<" "<<name<<endl;
        }
};
int main()
{
    char name1[] = "anand";
    Student s1(10,name1);
    s1.print();
    name1[4] = 'e';
    s1.print();
    Student s2(20,name1);
    s2.print();
}
