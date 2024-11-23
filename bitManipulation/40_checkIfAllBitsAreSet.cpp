#include<bits/stdc++.h>
using namespace std;

bool checkIfAllBitsAreSet(int n){
    if((n&(n+1)) == 0){
        return true;
    }
    return false;
}

int main(){
    cout<<checkIfAllBitsAreSet(14);
}

// 15 -> 1111