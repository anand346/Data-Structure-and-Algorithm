#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mergeArrays(int x[],int y[],int a[],int s,int e){
    int mid = (s+e)/2;
    int i = s;
    int j= mid+1;
    int k= s;
    while(i <= mid && j <= e){
        if(x[i] < y[j]){
            a[k] = x[i];
            k++;
            i++;
        }else{
            a[k] = y[j];
            k++;
            j++;
        }
    }
    while(i <= mid){
        a[k] = x[i];
        k++;
        i++;
    }
    while(j <= e){
        a[k] = y[j];
        k++;
        j++;
    }
}
void mergeSort(int a[],int s,int e){
    if(s >= e){
        return ;
    }
    int x[100];int y[100];
    int mid = (s+e)/2;
    for(int i = s;i <=mid ;i++){
        x[i] = a[i];
    }
    for(int i = mid+1;i <= e; i++){
        y[i] = a[i];
    }
    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);
    mergeArrays(x,y,a,s,e);
}
int main(){
    int a[] = {3,5,2,1,7,8,9,4,5};
    mergeSort(a,0,8);
    for(int i = 0;i <= 8;i++ ){
        cout<<a[i]<<" ";
    }
}