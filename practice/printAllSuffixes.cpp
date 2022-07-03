#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char name[100];
    cout<<"Enter your name : ";
    cin>>name;
    for(int i = strlen(name)-1;i >= 0;i--){
        for(int j = i;j < strlen(name);j++){
            cout<<name[j];
        }
        cout<<endl;
    }
}