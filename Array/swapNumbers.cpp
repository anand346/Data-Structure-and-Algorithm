#include <iostream>
using namespace std;
int main(){
    int a,b,n;
    cout<<"Enter Numbers"<<endl;
    cin>>a>>b;
    cout<<endl;
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;
    
    //using general method
    // n = a;
    // a = b;
    // b = n;


    //using bitwise operator method
    // a = a^b;
    // b = a^b;
    // a = a^b;


    //using inbuilt function
    swap(a,b);
    cout<<"After swapping"<<endl;
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;
}

