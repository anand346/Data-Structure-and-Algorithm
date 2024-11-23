#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int linearSearch(int a[],int n, int key){
    for(int i = 0; i < n;i++){
        if(a[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<"Enter key to search : "<<endl;
    cin>>key;
    cout<<"Key found at "<<linearSearch(a,n,key)<<" index"<<endl;
    getchar();
}