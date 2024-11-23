// https://youtu.be/J0WVNeVtKzY


#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,m;
    cin>>n>>m;

    int a[n];
    for(int i = 0;i <n;i++) cin>>a[i];

    int total = 1<<n;

    for(int k = 1;k < total ;k++){
        if(__builtin_popcount(k) == m){
            for(int i = 0;i < n;i++){
                if(k&(1<<i)){
                    cout<<a[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
}