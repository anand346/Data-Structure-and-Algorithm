#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int length(char input[]){
    if(input[0] == '\0'){
        return 0;
    }
    int small = length(input+1);
    return small + 1; 
    
}
int main(){
    char input[] = "abhishek";
    cout<<"length is " <<length(input);    
}