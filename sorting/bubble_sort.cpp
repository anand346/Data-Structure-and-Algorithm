#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[],int n){
    for(int count = 1; count < n; count++){
        int flag = 0;
        for(int j = 0; j < n-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
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
    bubbleSort(a,n);
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}