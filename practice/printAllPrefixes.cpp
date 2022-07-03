#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char name[100];
    cout<<"enter your name : ";
    cin>>name;
    for(int i =0;i < strlen(name);i++){
        for(int j = 0;j <= i;j++){
            cout<<name[j];
        }
        cout<<endl;
    }
}