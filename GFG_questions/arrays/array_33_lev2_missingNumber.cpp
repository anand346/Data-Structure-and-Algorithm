// Input:
// N = 5
// arr[] = {1,2,3,4,5}
// Output: 6
// Explanation: Smallest positive missing 
// number is 6.

#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int n){
    
    for(int i = 0;i < n;i++){
        int element = arr[i];
        int chair = element-1;
        if(element >= 1 && element <= n){
            if(arr[chair] != element){
                swap(arr[chair],arr[i]);
                i--;
            }
        }
    }
    for(int i= 0;i < n;i++){
        if(arr[i] != i+1){
            return i+1;
        }
    }
    return n+1;
}
int missingNumber2(int arr[], int n){
    int in = 1;
    sort(arr,arr+n);
    for(int i = 0;i < n;i++){
        if(arr[i] == in){
            in++;
        }
    }
    return in;
}
int main(){
    int n = 5;
    int arr[] = {1,2,3,4,5};
    cout<<missingNumber2(arr,n);
}