// codechef question
// https://youtu.be/gTSjkP63bBk?list=PLfQN-EvRGF39Vz4UO18BtA1ocnUhGkvk5

#include<bits/stdc++.h>
using namespace std;

int getXOR(int n){

    switch(n%4){
        case 0 : return n;
        case 1 : 1;
        case 2 : return n+1;
        case 3 : return 0;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<getXOR(n);
}