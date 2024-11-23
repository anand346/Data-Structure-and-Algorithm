// Input:
// N = 5
// Arr[] = {6, -3, -10, 0, 2}
// Output: 180
// Explanation: Subarray with maximum product
// is [6, -3, -10] which gives product as 180.


#include<bits/stdc++.h>
using namespace std;


long long maxProduct(vector<int> arr, int n){
    long long  maxp = INT_MIN , prod = 1;
    for(int i = 0;i < n;i++){
        prod *= arr[i];
        maxp = max(maxp,prod);
        if(prod == 0){
            prod = 1;
            continue;
        }
    }

    prod = 1;

    for(int i = n-1;i >= 0;i--){
        prod *= arr[i];
        maxp = max(maxp,prod);
        if(prod == 0){
            prod = 1;
            continue;
        }
    }

    return maxp;
}

int main(){
    int n = 5;
    vector<int> arr = {6, -3, -10, 0, 2};
    cout<<maxProduct(arr,n);
}