#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int smallest = i ;
        for(int j = i + 1; j < n ; j++){
            if(a[j]<a[smallest]){
                smallest = j;
            }
        }
        swap(a[i],a[smallest]);
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    selectionSort(a,n);
}