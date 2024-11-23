#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void removeA(char str[]){
    if(str[0] == '\0'){
        return ;
    }else if(str[0] != 'a'){
        removeA(str+1);
    }else{
        for(int i = 0; str[i] != '\0'; i++){
            str[i] = str[i+1];
        }
        removeA(str);
    }
}
int main(){
    char input[] = "anand";
    removeA(input);
    for(int i = 0;input[i] != '\0';i++){
        cout<<input[i]<<" ";
    }
}