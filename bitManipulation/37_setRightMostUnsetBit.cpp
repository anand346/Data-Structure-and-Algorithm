#include<bits/stdc++.h>
using namespace std;

int getPosOfRightmostUnsetBit(int n)
{
    return log2(n&-n)+1;
}
int setRightmostUnsetBit(int n){
    if (n == 0)
        return 1;
     
    // if all bits of 'n' are set
    if ((n & (n + 1)) == 0)   
        return n;
     
    // position of rightmost unset bit in 'n'
    // passing ~n as argument
    int pos = getPosOfRightmostUnsetBit(~n);   
     
    // set the bit at position 'pos'
    return ((1 << (pos - 1)) | n);
}

int main()
{
    int n = 23;
    cout << setRightmostUnsetBit(n);
    return 0;
}

// 22 -> 10110
// 23 -> 10111
// 31 -> 11111