#include<bits/stdc++.h>
using namespace std;


int findGCD(int num1,int num2){
    if(num2 == 0){
        return num1;
    }
    return findGCD(num2,num1%num2);
}

int main(){

    cout<<findGCD(12,8);
}