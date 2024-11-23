// https://www.geeksforgeeks.org/find-equal-point-string-brackets/

#include<bits/stdc++.h>
using namespace std;

int findIndex(string str){

    int open = 0;
    int close = 0;
    for(int i = 0;i < str.length();i++){
        if(str[i] == '(') open++;
    }
    for(int i = 0;i < str.length();i++){
        if(str[i] == ')') close++;
        else open--;

        if(open == close) return i+1;
    }

    

    
}
int main(){
    string str = "(())))(";
    cout<<findIndex(str);
}