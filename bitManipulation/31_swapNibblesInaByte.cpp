// https://youtu.be/zJHbYk6NfJk

#include<bits/stdc++.h>
using namespace std;


int swapNibbles(int x){

    return ((x&(0x0f))<<4) | ((x&(0xf0))>>4);
}

int main(){
    int x = 100;

    cout<<swapNibbles(x);
}