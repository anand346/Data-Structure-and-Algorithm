// https://www.youtube.com/watch?v=lys3Ud0-OMc

#include<bits/stdc++.h>
using namespace std;


bool isPowerTwo1(int n){
    if(n < 0){
        return false;
    }
    int count = 0;
    while(n){
        count++;
        n = n&(n-1);
    }
    return count == 1;
}

bool isPowerTwo(int n){

    if((n&(n-1)) == 0) return true;
    return false;
}

int main(){

    int n;
    cin>>n;
    cout<<isPowerTwo(n);
}