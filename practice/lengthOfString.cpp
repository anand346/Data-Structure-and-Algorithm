#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int length(char input[]){
    int length = 0;
    for(int i = 0;input[i] != '\0';i++){
        length++;
    }
    return length;
}
int main(){
    char c[10];
    cout<<"Enter your name : ";
    cin>>c;
    int n = length(c);
    cout<<"length of string is : "<<n;
}