#include<bits/stdc++.h>
using namespace std;

int f(int n){

    switch(n%4){
        case 0 : return n;
        case 1 : 1;
        case 2 : return n+1;
        case 3 : return 0;
    }
}

int findXOR(int l, int r){
    return (f(l - 1) ^ f(r));
}

int main(){
    cout<<findXOR(6,8);
}