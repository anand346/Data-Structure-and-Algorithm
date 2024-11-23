// https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1

#include<bits/stdc++.h>
using namespace std;

int countLessThanMid(int arr[], int n, int mid) {
    int low = 0, high = n-1;
    while(low <= high) {
        int m = (low+high)/2;
        if(arr[m] <= mid) low = m+1;
        else high = m-1;
    }
    return low;
}
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    int low = mat[0][0], high = mat[n-1][n-1];
    while(low <= high) {
        int mid = (low + high)/2, count = 0;
        for(int i=0; i<n; i++) {
            count += countLessThanMid(mat[i], n, mid);
        }
        if(count < k) low = mid+1;
        else high = mid-1;
    }
    return low;
}

int main(){

}