#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int firstIndex(int a[],int n,int x,int i){
    if(n == i){
        return  -1;
    }
    if(a[i] == x){
        return i;
    }
    int small = firstIndex(a,n,x,i+1);
    return small;
}
int firstIndex1(int a[],int n,int m,int i){

    if(n == i){
        return -1;
    }

    if(a[i] == m){
        return i;
    }

    return firstIndex1(a,n,m,i+1);
}   
int lastIndex(int a[],int n,int x,int i){
    if(i < 0){
        return  -1;
    }
    if(a[i] == x){
        return i;
    }
    int small = lastIndex(a,n,x,i-1);
    return small;
}
int lastIndex1(int a[],int n,int x){
    if(n < 0){
        return  -1;
    }
    if(a[n-1] == x){
        return n-1;
    }
    int small = lastIndex1(a,n-1,x);
    return small;
}
int lastIndex2(int a[],int n,int x,int i){
    if(i == n){
        return  -1;
    }
    int small = lastIndex2(a,n,x,i+1);
    if(small == -1){
        if(a[i] == x){
            return i;
        }else{
            return -1;
        }
    }else{
        return small;
    }
}
int main(){
    int a[5] = {1,2,5,4,5};
    cout<<"key found at : "<<firstIndex1(a,5,5,0);
}