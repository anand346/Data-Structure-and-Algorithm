#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}