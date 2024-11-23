// https://youtu.be/0AAjJvlq5Is


#include<bits/stdc++.h>
using namespace std;


int main(){

    int n = 4;
    int a[n] = {2,3,5,2};

    int total = 1<<n;
    for(int k = 1;k < total ;k++){
        for(int i = 0;i < n;i++){
            if(k&(1<<i)){
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
}