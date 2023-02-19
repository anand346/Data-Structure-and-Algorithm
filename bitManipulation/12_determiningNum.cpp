// https://youtu.be/DvNItnE2k0g?list=PLfQN-EvRGF39Vz4UO18BtA1ocnUhGkvk5

#include<bits/stdc++.h>
using namespace std;


int main(){

    int a[] = {2,6,3,4,5,4,3,5};

    int ans = 0;

    for(int i : a) ans = ans^i;

    int pos = floor(log2(ans)+1);

    int y1 = 0, y2 = 0;
    for(int i : a){
        if(i & (1 << (pos-1))){
            y1 ^= i;
        }else{
            y2 ^= i;
        }
    }

    if(y1 < y2) cout<<y1<<" "<<y2;
    else cout<<y2<<" "<<y1;

}