// Input: 
// N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated 
// into ascending order.

#include<bits/stdc++.h>
using namespace std;
void sort012(int a[], int n){
        // code here 
        sort(a,a+n);
}
int main(){
    int n = 5;
    int arr[] = {0,2,1,2,0};
    sort012(arr,n);
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }  
}