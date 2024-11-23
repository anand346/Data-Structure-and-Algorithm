// Input:
// N = 5
// arr[] = {4 ,5 ,1 ,2 ,3}
// Output: 1
// Explanation: 1 is the minimum element inthe array.


#include<bits/stdc++.h>
using namespace std;

int findMin(int arr[],int n){
    int ans = 0;

    int s = 0;
    int e = n-1;
    while(s < e){
        int mid = s+(e-s)/2;
        if(arr[mid] > arr[e]){
            s = mid+1;
        }else{
            e = mid;
        }
    }
    return arr[s];
}
int main(){
    int n = 5;
    int arr[] = {4 ,5 ,1 ,2 ,3};
    cout<<findMin(arr,n);
}