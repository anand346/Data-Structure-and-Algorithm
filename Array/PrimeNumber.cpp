#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    // string desc = "prime";
    for(int i = 2;i < num/2 ;i++){
        if(num%i == 0){
            cout<<"num is not prime";
            break;
        }
    }
}