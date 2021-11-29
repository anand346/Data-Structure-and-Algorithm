#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int s,int e){
    int pivot = a[e];
    int i = 0;
    for(int j = 0;j < e ;j++){
        if(a[j] < pivot){
            swap(a[j],a[i]);
            i++;
        }
    }
    swap(a[e],a[i]);
    return i;
}
void quickSort(int a[],int s,int e){
    if(s >= e){
        return ;
    }
    int p = partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}
int main(){
    int a[] = {6,3,2,1,8,7,9,5,3};
    quickSort(a,0,8);
    for(int i = 0;i < 9;i++){
        cout<<a[i]<<" ";
    }
}