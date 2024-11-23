#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkElement(int a[],int n,int x){
    if(n == 0){
        return false;
    }
    if(a[0] == x){
        return true;
    }
    bool small = checkElement(a+1,n-1,x);
    return small;
}
bool checkElement1(int a[],int n,int x){
    if(n == 0){
        return false;
    }
    bool small = checkElement1(a+1,n-1,x);
    if(small){
        return true;
    }
    if(a[0] == x){
        return true;
    }else{
        return false;
    }
}
bool checkElement2(int a[],int n,int x){
    if(n == 0){
        return false;
    }
    if(a[n-1] == x){
        return true;
    }
    bool small =  checkElement2(a,n-1,x);
    return small;
}
bool checkElement3(int a[],int n,int x){
    if(n == 0){
        return false;
    }
    bool small =  checkElement3(a,n-1,x);
    if(small){
        return true;
    }
    if(a[n-1] == x){
        return true;
    }else{
        return false;
    }
}
bool checkElement4(int a[],int n,int x,int i){
    if(n == i){
        return false;
    }
    if(a[i] == x){
        return true;
    }
    return checkElement4(a,n,x,i + 1);
}
int main(){
    int a[5] = {1,2,3,4,5};
    if(checkElement4(a,5,3,0)){
        cout<<"found";
    }else{
        cout<<"not found";
    }
}