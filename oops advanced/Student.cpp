
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
class Student{
    int age;
    char *name;
    public : 
        Student(int age, char *name){
            this->age = age;
            this->name = name;
        }
        void print(){
            cout<<age<<" "<<name<<endl;
        }
};
int main()
{
    char name1[] = "anand";
    Student s1 = new Student(10,name1);
    s1.print();
    name1[4] = 'e';
    Student s2 = new Student(20,name1);
    s2.print();
    s1.print();
}
