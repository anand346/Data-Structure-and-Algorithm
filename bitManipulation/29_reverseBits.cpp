// https://youtu.be/FMdQxjiqg2I

#include<bits/stdc++.h>
using namespace std;


int reverseBits(int n){

    unsigned int ans = 0;

    for(int i = 1;i <= 32;i++){
        if(n&(1<<i)){
            ans = ans | (1<<(32-i));
        }
    }

    return ans;
}

int main(){
    cout<<reverseBits(256);
}