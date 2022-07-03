#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int a[],int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(a[0] > a[1]){
        return false;
    }
    bool smallSorted = isSorted(a + 1,n-1);
    return smallSorted;
}
bool isSorted2(int a[], int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(a[n-2] > a[n-1]){
        return false;
    }
    bool smallSorted = isSorted2(a,n-1);
    return smallSorted;
}
bool checkSorted1(int a[],int n){
    if(n == 0){
        return true;
    }
    if(a[0] < a[1]){
        return checkSorted(a+1,n-1);
    }else{
        return false;
    }
}
int main(){ 
    int n = 5;
    int a[n] = {1,2,3,5,4};
    if(isSorted2(a,n)){
        cout<<"sorted"<<endl;
    }else{
        cout<<"not sorted"<<endl;
    }
}