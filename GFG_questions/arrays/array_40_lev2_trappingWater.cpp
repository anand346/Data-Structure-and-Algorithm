// N = 6
// arr[] = {3,0,0,2,0,4}
// Output:
// 10


#include<bits/stdc++.h>
using namespace std;
long long trappingWater(int arr[], int n){
    int lmax[n];lmax[0] = arr[0];
    int temp = arr[0];
    for(int i = 1;i < n;i++){
        temp = max(arr[i],temp);
        lmax[i] = temp;
    }

    int rmax[n];rmax[n-1] = arr[n-1];
    temp = arr[n-1];
    for(int i = n-2;i >= 0;i--){
        temp = max(arr[i],temp);
        rmax[i] = temp;
    }

    long long count = 0;
    for(int i = 1;i < n-1;i++){
        int  minm = (lmax[i] <= rmax[i]) ? lmax[i] : rmax[i];
        count += minm - arr[i];
    }

    return  count;
}
int main(){
    int n = 6;
    int arr[] = {3,0,0,2,0,4};

    cout<<trappingWater(arr,n);
}