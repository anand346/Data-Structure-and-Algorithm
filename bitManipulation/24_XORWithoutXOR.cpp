#include<bits/stdc++.h>
using namespace std;


int myXOR(int x, int y)
{
    // return (x & (~y)) | ((~x )& y);
    return (x | y) & (~x | ~y);
}

int main(){
    cout<<myXOR(2,1);
}