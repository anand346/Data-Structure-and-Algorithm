#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int s,int e){
    int pivot = a[e];
    int i = s;
    for(int j = s;j <= e-1;j++){
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
    int a[] = {4,2,7,8,5,2,3};
    quickSort(a,0,6);
    for(int i = 0; i < 7;i++){
        cout<<a[i]<<" ";
    }
}