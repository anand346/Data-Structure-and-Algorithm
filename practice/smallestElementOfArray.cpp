#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    int smallest = INT_MAX;
    for(int i = 0;i < n;i++){
        cin>>a[i];
        if(a[i] < smallest){
            smallest = a[i];
        }
    }
    cout<<"smallest element is : "<<smallest;
}