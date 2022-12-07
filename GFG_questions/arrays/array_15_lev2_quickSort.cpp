#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[e];
    int j = s;
    for(int i = s;i < e;i++){
        if(arr[i] < pivot){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    swap(arr[j],arr[e]);
    return j;
}
void quickSort(int arr[],int s,int e){
    if(s >= e){
        return ;
    }
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[] = {4,1,3,9,7};
    quickSort(arr,0,4);
    for(int i = 0;i < 5; i++){
        cout<<arr[i]<<" ";
    }
}