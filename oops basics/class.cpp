#include <iostream>
using namespace std;
class Student{
    public : 
        int age;
        int weight;
        string name;
};
int main(){
    Student s1,s2,s3;
    s1.age = 19;
    s1.weight = 45;
    s1.name = "anand";

    cout<<s1.name<<endl;


    Student *s4 = new Student;
    (*s4).age = 45;
    (*s4).weight = 45;
    (*s4).name = "anand";


    //or

    s4->age = 45;
    s4->weight = 45;
    s4->name = "aakash";
}