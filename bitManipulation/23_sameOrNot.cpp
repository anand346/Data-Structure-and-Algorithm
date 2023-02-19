// https://www.geeksforgeeks.org/check-if-two-numbers-are-equal-without-using-arithmetic-and-comparison-operators/

#include<bits/stdc++.h>
using namespace std;

void areSame(int a, int b)
{
    if (a ^ b)
        cout << "Not Same";
    else
        cout << "Same";
}

int main(){
    areSame(4,4);
}