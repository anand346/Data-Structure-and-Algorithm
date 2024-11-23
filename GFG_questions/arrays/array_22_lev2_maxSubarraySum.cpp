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

// to print max subarray sum
void kadane(int arr[], int n){
    if (n <= 0) {
        return;
    }
    int max_global = INT_MIN;
    int max_current = 0;
    int start = 0, end = 0;
    int beg = 0;
    for (int i = 0; i < n; i++){
        
        max_current = max_current + arr[i];
        if(max_current < arr[i]){
            max_current = arr[i];
            beg = i;
        }
        if(max_global < max_current){
            max_global = max_current;
            start = beg;
            end = i;
        }
    }
 
    cout << "The contiguous subarray with the largest sum is ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
}
int main(){
    int n = 5;
    // int arr[] = {1,-2,2};
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    cout<<maxSubarraySum(arr,8);
}