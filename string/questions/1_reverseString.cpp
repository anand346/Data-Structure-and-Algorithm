#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseString(string s){

    int i = 0;
    int cnt = 0;
    reverse(s.begin(),s.end());
    for(;i < s.length();i++){
        if(s[i] == '.'){
            reverse(s.begin()+cnt,s.begin()+i);
            cnt = i+1;
        }   
    }
    reverse(s.begin()+cnt,s.begin()+i);
    return s;
}
int main(){

    string s = "hello.world.how.are.you";
    string out = reverseString(s);
    cout<<out;
}