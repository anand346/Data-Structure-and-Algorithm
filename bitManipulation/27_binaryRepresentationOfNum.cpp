#include<bits/stdc++.h>
using namespace std;


void represent(int n){

    if(n > 1){
        represent(n/2);
    }

    cout<<n%2;
}

int main(){
    represent(10);
}