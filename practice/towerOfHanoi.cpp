#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int toh(int n){
    if(n == 0){
        return 0;
    }
    return toh(n-1) + 1  + toh(n-1);
}
void printSteps(int n,char s,char h, char d){
    if(n == 0){
        return ;
    }
    printSteps(n-1,s,d,h);
    cout<<"moving disk "<<n<<" from "<<s<<" to "<<d<<endl;
    printSteps(n-1,h,s,d);
}
int main(){
    int n;
    cin>>n;
    cout<<toh(n)<<endl;
    printSteps(n,'A','B','C');
}