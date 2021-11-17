#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int saveAllPos(int a[],int n,int x,int i,vector<int> &ans){
    if(i == n){
        return 0;
    }
    if(a[i] == x){
        ans.push_back(i);
    }
    saveAllPos(a,n,x,i+1,ans);
    
}
int main(){
    int a[8] = {1,2,5,4,5,6,5,5};
    vector<int> v;
    saveAllPos(a,8,5,0,v);
    for(int i = 0;i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}