#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int s,int e){
    int i = s;
    int pivot = a[e];
    for(int j = s; j <= e-1; j++){
        if(a[j] < pivot){
            swap(a[j],a[i]);
            i++;
        }
    }
    swap(a[e],a[i]);
    return i;
}

int partition_using_first_element_as_pivot(int a[],int s,int e){
    int i = s;
    int pivot = a[s];

    for(int j = s+1; j <= e; j++){
        if(a[j] <= pivot){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[s],a[i]);
    return i;
}

int partition_using_first_element_as_pivot2(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;

    for (int j = low + 1; j <= high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[i]);
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
    int a[] = {2,4,5,1,8,6};
    quickSort(a,0,5);
    for(int i = 0;i < 6; i++){
        cout<<a[i]<<" ";
    }
}