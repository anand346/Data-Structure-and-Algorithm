// https://youtu.be/V5vce2fxvkg

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i < n;i++) cin>>a[i];

    int res = 0;


    for(int i = 1;i <= n;i++) res = res^i;
    for(int i = 0;i < n;i++) res = res^a[i];

    int setBit = res & ~(res-1);

    int L = 0, R = 0;
    for(int i = 0;i < n;i++){
        if(a[i] & setBit){
            L = L^a[i];
        }else{
            R = R^a[i];
        }
    }


    for(int i = 1;i <= n;i++){
        if(i & setBit){
            L = L^i;
        }else{
            R = R^i;
        }
    }

    bool isLMissing = true;
    for(int i = 0;i < n;i++){
        if(a[i] == L){
            isLMissing = false;
            break;
        }
    }

    if(isLMissing){
        cout<<"Missing Num : "<<L<<" Repeating Num : "<<R<<endl;
    }else{
        cout<<"Missing Num : "<<R<<" Repeating Num : "<<L<<endl;
    }
}