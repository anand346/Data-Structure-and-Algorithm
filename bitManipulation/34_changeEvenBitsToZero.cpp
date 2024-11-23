// https://youtu.be/D2nvqP-qiso


#include<bits/stdc++.h>
using namespace std;


int changeEvenBitsToZero(int n){

    return n&(0xaaaaaaaa); 
    // return n&(0x55555555); 
}

int main(){
    cout<<changeEvenBitsToZero(30);

}

// 30 -> 11110
// 20 -> 10100
// 10 -> 01010