// https://www.geeksforgeeks.org/russian-peasant-multiply-two-numbers-using-bitwise-operators/


// russian peasant is a method to multiply two numbers using bit operations
#include<bits/stdc++.h>
using namespace std;

int russianPeasant(int a,int b){
    int res = 0;
    while(b > 0){
        if(b&1){
            res = res+a;
        }

        a = a << 1;
        b = b >> 1;

    }
    return res;
}

int main(){

    cout<<russianPeasant(7,6);
}