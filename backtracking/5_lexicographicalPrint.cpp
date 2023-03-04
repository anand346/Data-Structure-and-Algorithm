// https://youtu.be/gRo86WqFYSE?list=PL-Jc9J83PIiHO9SQ6lxGuDsZNt2mkHEn0

#include<bits/stdc++.h>
using namespace std;


void dfs(int i,int n){

    if(i > n){
        return ;
    }
    cout<<i<<endl;
    for(int j = 0;j < 10;j++){
        dfs(10*i+j,n);
    }
}

int main(){
    int n;
    cin>>n;

    for(int i = 1;i < 10;i++){
        dfs(i,n);
    }
}