// Input:
// K = 2, N = 4
// Arr[] = {1, 5, 8, 10}
// Output:
// 5
// Explanation:
// The array can be modified as 
// {3, 3, 6, 8}. The difference between 
// the largest and the smallest is 8-3 = 5.



#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k){

    sort(arr,arr+n);
    int lt = 0;
    int st = 0;
    int ans = arr[n-1] - arr[0];
    int large = arr[n-1]-k;
    int small = arr[0]+k;

    for(int i = 0;i < n-1;i++){
        int lt = max(large,arr[i]+k);
        int st = min(small,arr[i+1]-k); 

        if(st < 0){
            continue;
        }

        ans = min(ans,lt-st);
    }
    return ans;
}
int main(){
   int k = 2, n = 4;
    int arr[] = {1, 5, 8, 10};
    cout<<getMinDiff(arr,n,k);
}