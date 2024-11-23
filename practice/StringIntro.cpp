#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char name[100];
    cin>>name;

    vector<string> a;
    a.push_back("hello");
    a.push_back("hello1");
    a.push_back("hello2");
    a.push_back("hello3");
    // a.clear();
    a.pop_back();
    cout<<a.size()<<endl;
    a[1] = "hello2";
    cout<<a[1]<<endl;
    // cout<<a[0].end();
    
}