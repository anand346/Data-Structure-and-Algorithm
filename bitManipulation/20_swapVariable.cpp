// https://www.youtube.com/watch?v=DtnH3V_Vjek&list=PLNmW52ef0uwvkul_e_wLD525jbTfMKLIJ&index=4

#include<bits/stdc++.h>
using namespace std;


int main(){

    int x =10,y =15;

    x = x^y;
    y = x^y;
    x = x^y;
    cout<<x<<" "<<y;
}