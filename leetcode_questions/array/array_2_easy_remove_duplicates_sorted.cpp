#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& a){
    int n= a.size();
    int pos = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] != a[i+1]){
            a[++pos] = a[i+1];
        }
    }
    return pos+1;
}
int main(){
    vector<int> a = {1,2,2,2,3,3,3,4,5,6,6}; //sorted
    int newSize = removeDuplicates(a);
    for(int i= 0;i < newSize; i++){
        cout<<a[i]<<" ";
    }
}