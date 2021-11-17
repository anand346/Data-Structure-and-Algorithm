#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printAll(int a[],int n,int x,int i){
    if(i == n){
        return;
    }
    if(a[i] == x){
        cout<<i<<" ";
    }
    printAll(a,n,x,i+1);
}
int main(){
    int a[5] = {4,2,4,4,5};
    printAll(a,5,4,0);
}