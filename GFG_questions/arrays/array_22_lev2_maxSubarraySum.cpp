// Kadane's algo

// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.


#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n){
    int max_current = arr[0];
    int max_global = arr[0];
    for(int i= 1;i < n;i++){
        max_current = max(arr[i],max_current + arr[i]);
        if(max_current > max_global){
            max_global = max_current;
        }
    }   
    return max_global;
}
int main(){
    int n = 5;
    int arr[] = {1,2,3,-2,5};
    cout<<maxSubarraySum(arr,5);
}