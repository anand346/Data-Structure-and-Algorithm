#include<bits/stdc++.h>
using namespace std;

int minBitFlips(int start, int goal) {
    return __builtin_popcount(start^goal);
}

int main(){
    cout<<minBitFlips(10,3);
}

// 10 -> 1010
// 03 -> 0011
// 07 -> 0111