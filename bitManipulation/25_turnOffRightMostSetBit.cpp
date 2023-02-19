#include<bits/stdc++.h>
using namespace std;


int fun(int n){
    return n & (n-1);
}

int main(){ 
    cout<<fun(8);
}