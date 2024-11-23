#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q1;
    for(int i = 0;i < 10;i++){
        q1.push(i);
    }
    cout<<q1.size()<<endl;
    cout<<q1.empty()<<endl;
    while(!q1.empty()){
        cout<<q1.front()<<endl;
        q1.pop();
    }

}