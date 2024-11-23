// https://youtu.be/E7thKCWmP98?list=PLfQN-EvRGF39Vz4UO18BtA1ocnUhGkvk5

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // n = 5;
    int a[] = {1,3,4,5};

    int ans = 0;
    for(int i = 1;i <= 5;i++){
        ans = ans^i;
    }

    for(int i = 0;i < 4;i++){
        ans = ans^a[i];
    }
    cout<<ans;
}