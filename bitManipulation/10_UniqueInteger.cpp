// https://youtu.be/O_E43n7V8DI?list=PLfQN-EvRGF39Vz4UO18BtA1ocnUhGkvk5

#include<bits/stdc++.h>
using namespace std;


int main(){
    int a[] = {1,4,3,5,3,1,4};

    int ans=0;
    for(int i = 0;i < 7;i++){
        ans = ans^a[i];
    }
    cout<<ans;
}