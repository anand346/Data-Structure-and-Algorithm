// Input:
// N = 8, M = 5
// A = {3, 4, 1, 9, 56, 7, 9, 12}
// Output: 6
// Explanation: The minimum difference between 
// maximum chocolates and minimum chocolates 
// is 9 - 3 = 6 by choosing following M packets :
// {3, 4, 9, 7, 9}.


#include<bits/stdc++.h>
using namespace std;
long long findMinDiff(vector<long> arr, long long n, long long m){

    long long ans = INT_MAX;
    sort(arr.begin(),arr.end());
    for(int i = 0;i <= n-m;i++){
        int minI = i;
        int maxI = i+m-1;

        if(arr[maxI] - arr[minI] < ans){
            ans = arr[maxI] - arr[minI];
        }
    }
    return ans;
}
int main(){
    long long N = 8, M = 5;
    vector<long> A = {3, 4, 1, 9, 56, 7, 9, 12};
    cout<<findMinDiff(A,N,M);
}