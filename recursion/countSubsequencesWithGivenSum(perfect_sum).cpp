#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/

int countSubsequencesWithGivenSum(int arr[],int n, int sum) 
 { 
     if (n==0 && sum==0)
         return 1;
     if (n==0)
         return 0;
     if (sum==0)
         return 1;
     
     if (arr[n-1] > sum) {
         return countSubsequencesWithGivenSum(arr, n-1, sum);
     } else {
         return countSubsequencesWithGivenSum(arr, n-1, sum - arr[n-1]) + countSubsequencesWithGivenSum(arr, n-1, sum);
     }  
 }

// tc = O(sort)
// sc = O(n)
 class Solution {
 public:
  int numSubseq(vector<int>& nums, int target) {
    constexpr int kMod = 1'000'000'007;
    const int n = nums.size();
    int ans = 0;
    vector<int> pows(n, 1);  // pows[i] = 2^i % kMod

    for (int i = 1; i < n; ++i)
      pows[i] = pows[i - 1] * 2 % kMod;

    sort(nums.begin(), nums.end());

    for (int l = 0, r = n - 1; l <= r;)
      if (nums[l] + nums[r] <= target) {
        ans += pows[r - l];
        ans %= kMod;
        ++l;
      } else {
        --r;
      }

    return ans;
  }
};
