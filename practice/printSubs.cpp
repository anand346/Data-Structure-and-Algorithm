#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printAllSubs(string input,string output){
    if(input.length() == 0){
        cout<<output<<endl;
        return ;
    }
     printAllSubs(input.substr(1),output + input[0]);
     printAllSubs(input.substr(1),output);
}
int main(){
    string in = "abc";
    string out = "";
    printAllSubs(in,out);
}