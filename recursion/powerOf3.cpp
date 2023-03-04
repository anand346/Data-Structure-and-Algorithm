#include<bits/stdc++.h>
using namespace std;


bool powerOfThree(int n){

    if(n == 1 || n == 3) return true;
    if(n == 0 || n%3 != 0) return false;

    return powerOfThree(n/3);
}

int main(){

    cout<<powerOfThree(27);
}