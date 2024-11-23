#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void charReplace(char input[]){
    if(input[0] == '\0'){
        return ;
    }
    if(input[0] == 'n'){
        input[0] = 'a';
    }
    charReplace(input +1);
}
int main(){
    char input[] = "anand";
    charReplace(input);
    cout<<input;
}