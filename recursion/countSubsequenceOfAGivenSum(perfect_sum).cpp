#include<bits/stdc++.h>
using namespace std;

int countSubsetsWithGivenSum(int arr[],int n, int sum) 
 { 
     if (n==0 && sum==0)
         return 1;
     if (n==0)
         return 0;
     if (sum==0)
         return 1;
     
     if (arr[n-1] > sum) {
         return countSubsetsWithGivenSum(arr, n-1, sum);
     } else {
         return countSubsetsWithGivenSum(arr, n-1, sum - arr[n-1]) + countSubsetsWithGivenSum(arr, n-1, sum);
     }  
 }