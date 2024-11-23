#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q1;
    for(int i = 0;i < 10;i++){
        q1.push(i);
    }
    stack<int> s1;
    while(!q1.empty()){
        s1.push(q1.front());
        q1.pop();
    }
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
}