#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void removeConsecutive(char str[]){
    if(str[0] == '\0'){
        return ;
    }else if(str[0] != str[1]){
        removeConsecutive(str+1);
    }else{
        for(int i = 0;str[i] != '\0';i++){
            str[i] = str[i+1];
        }
        removeConsecutive(str);
    }
}
int main(){
    char input[] = "lllsssdddffflllffssf";
    removeConsecutive(input);
    for(int i = 0;input[i] != '\0';i++){
        cout<<input[i]<<" ";
    }
}