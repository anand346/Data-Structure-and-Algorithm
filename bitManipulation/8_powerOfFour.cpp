// https://www.youtube.com/watch?v=nRGAYLzP4p0


#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n){
    if(n < 0) return false;

// __builtin_popcount is used to count the set bits of a decimal num
// floor(log2(n)+1) is used to count the total no. of bits used in n (decimal no.)


    if(__builtin_popcount(n) == 1){
        int k = floor(log2(n)+1);
        if(k&1) return true;
    }
    return false;
}

int main(){

    int n;
    cin>>n;
    cout<<isPowerOfFour(n);

    // 32 = 100000

}