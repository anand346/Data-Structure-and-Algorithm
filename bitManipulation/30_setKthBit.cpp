// https://youtu.be/sPKPnA0iGNs


#include<bits/stdc++.h>
using namespace std;

int setKthBit(int n,int k){

    n = n | (1 << k-1);
    return n;
}


int main(){
    cout<<setKthBit(10,3);
}