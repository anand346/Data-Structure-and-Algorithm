// Input:
// N = 5
// A[] = {1, 2, 3, 4, 5}
// Output:
// 5 1 2 3 4

#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n){
    int last = arr[n-1];
    for(int i = n-1;i >= 0;i--){
        if(i != 0){
            arr[i] = arr[i-1];
        }else{
            arr[i] = last;
        }
    }
}
int main(){
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    rotate(a,n);
    for(int i = 0;i < n;i++){
        cout<<a[i]<<" ";
    }
}