// https://youtu.be/iIHckwSOSNs?list=PLfQN-EvRGF39Vz4UO18BtA1ocnUhGkvk5

#include<bits/stdc++.h>
using namespace std;

int main(){


    int n,m;
    cin>>n>>m;

    int a[n];
    for(int i = 0;i < n;i++) cin>>a[i];

    int total = 1<<n;
    bool flag = false;

    for(int k = 1;k < total ;k++){
        long long sum = 0;
        for(int i = 0;i < n;i++){
            if(k&(1<<i)){
                sum += a[i];
            }
        }

        if(sum == m){
            flag = true;
            break;
        }
    }

    flag ? cout<<"yes"<<endl : cout<<"No"<<endl;

}