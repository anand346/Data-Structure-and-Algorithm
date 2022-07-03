#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    int total = 0;
    for(int i = 0;i < n;i++){
        cin>>a[i];
        total = total+a[i];
    }
    cout<<"Sum of array is : "<<total;
}