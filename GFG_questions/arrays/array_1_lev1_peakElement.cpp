// 2 {3,4} -> 4
// 3 {1,2,3} -> 3

#include<bits/stdc++.h>
using namespace std;
int peakElement(int arr[],int n){
    int peakElement = INT_MIN;
    for(int i = 0;i < n;i++){
        if(arr[i] > peakElement){
            peakElement = i;
        }
    }
    return peakElement;
}
int main(){
    int a[] = {1,2,3};
    cout<<peakElement(a,3);
}