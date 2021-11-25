#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void replaceChar(char input[]){
    if(input[0] == '\0'){
        return ;
    }else if(input[0] != 'a'){
        replaceChar(input+1);
    }else{
        input[0] = 'n';
        replaceChar(input);
    }
}
int main(){
    char input[] = "anandRaj";
    replaceChar(input);
    for(int i = 0;input[i] != '\0';i++){
        cout<<input[i]<<' ';
    }
}