#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkSorted(int a[],int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(a[0] > a[1]){
        return false;
    }
    bool small = checkSorted(a+1,n-1);
    return small;
}
bool checkSorted1(int a[],int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(a[n-2] > a[n-1]){
        return false;
    }
    bool small = checkSorted1(a,n-1);
    return small;
}
int sum(int a[],int n){
    if(n == 0){
        return 0;
    }
    int small = sum(a,n-1);
    return small+a[n-1];
}
int sum1(int a[],int n){
    if(n == 0){
        return 0;
    }
    int small = sum(a+1,n-1);
    return small+a[0];
}
int sum2(int a[],int n,int i){
    if(n == i){
        return 0;
    }
    int small = sum2(a,n,i+1);
    return small+a[i];
}
int main(){
    int a[5] = {1,2,3,5,4};
    cout<<"sum is : "<<sum2(a,5,0)<<endl;
    // if(checkSorted1(a,5)){
    //     cout<<"array is sorted";
    // }else{
    //     cout<<"array is not sorted";
    // }
}