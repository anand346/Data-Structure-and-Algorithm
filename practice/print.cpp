#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reversePrint(char str[]){
    if(str[0] == '\0'){
        return ;
    }
    reversePrint(str+1);
    cout<<str[0]<<" ";
}
void print(char str[]){
    if(str[0] == '\0'){
        return ;
    }
    cout<<str[0]<<" ";
    print(str+1);
}
int main(){
    char input[] = "anand";
    print(input);
}