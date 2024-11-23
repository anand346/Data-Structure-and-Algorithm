#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int a[n];
    for(int i = 0;i < n;i++){
        cout<<"Enter "<<i+1<<"th element : ";
        cin>>a[i];
    }
    cout<<"Before reverse : "<<endl;
    for(int i = 0;i < n;i++){
        cout<<a[i]<<endl;
    }
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(a[start],a[end]);
        start++;end--;
    }
    cout<<"After reverse : "<<endl;
    for(int i = 0;i < n;i++){
        cout<<a[i]<<endl;
    }
}