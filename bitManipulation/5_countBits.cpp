// https://www.youtube.com/watch?v=PXlzn60mRKI
// https://www.geeksforgeeks.org/count-total-bits-number/

#include<bits/stdc++.h>
using namespace std;


int countBits(int n){

    return (int)log2(n)+1;
    // return (int)log10(n)+1;
}

int main(){

    cout<<countBits(32);
}