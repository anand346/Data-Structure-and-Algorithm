// Input:
// n = 6, X = 13
// arr[] = [1 4 45 6 10 8]
// Output:
// 1
// Explanation:
// The triplet {1, 4, 8} in 
// the array sums up to 13.
#include<bits/stdc++.h>
using namespace std;
int find3Numbers(int arr[], int n, int x){
    sort(arr,arr+n);
    int ans = 0;
    for(int i = 0;i < n;i++){
        int rem = x - arr[i];
        int low = i+1;
        int high = n-1;
        while(low < high){
            if(arr[low] + arr[high] == rem){
                ans = 1;
                break;
            }else if(arr[low] + arr[high] > rem){
                high--;
            }else{
                low++;
            }
            // low++;
            // high--;
        }
    }
    return ans;
}
int main(){
    int n = 6;int x = 13;
    int arr[] = {1,4,45,6,10,8};

    cout<<find3Numbers(arr,n,x);
}