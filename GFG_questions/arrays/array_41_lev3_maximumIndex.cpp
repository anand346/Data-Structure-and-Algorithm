// Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] < A[j] and i < j.

// Input:
// N = 2
// A[] = {1, 10}
// Output:
// 1
// Explanation:
// A[0]<A[1] so (j-i) is 1-0 = 1.

#include<bits/stdc++.h>
using namespace std;
int maxIndexDiff(int a[], int n){
    int res = -1;
    for(int i = 0;i < n;i++){
        for(int j = n-1;j >= i;j--){
            if(a[j] >= a[i]){
                res  = max(res,j-i);
            }
        }
    }
    return res;
}
int main(){
    int a[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = 9;
    cout<<maxIndexDiff(a,n);
}