#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s1;
    for(int i = 0;i < 10;i++){
        s1.push(i);
    }
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
}