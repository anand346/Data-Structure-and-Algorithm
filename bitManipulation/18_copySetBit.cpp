// https://www.geeksforgeeks.org/copy-set-bits-in-a-range/

#include<bits/stdc++.h>
using namespace std;


void copySetBit(int &x,int y,int l,int r){


    if(l < 1 || r > 32){
        return ;
    }


    for(;l <= r;l++){

        int k = 1<<l;

        if(y&k){
            x = x|k;
        }
    }
}

int main(){

    int x=10,y=13,l=1,r=32;
    copySetBit(x,y,l,r);
    cout<<"Modified x is : "<<x;
}

// y -> 1101
// x -> 1010