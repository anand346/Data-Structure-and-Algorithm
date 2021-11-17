#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sumOfArray(int a[],int n){
    if(n == 0){
        return 0;
    }
    int sum = sumOfArray(a+1,n-1);
    return sum + a[0];
}
int sumOfArray2(int a[],int n){
    if(n == 0){
        return 0;
    }
    int sum = sumOfArray2(a,n-1);
    return sum + a[n-1];
}
int sumOfArray3(int a[],int n,int i){
    if(i == n){
        return 0;
    }
    return a[i] + sumOfArray3(a,n,i+1);
}
int main(){
    int n = 5;
    int a[n] = {1,2,3,4,5};
    cout<<sumOfArray3(a,n,0)<<endl;
}