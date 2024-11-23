#include<bits/stdc++.h>
using namaspace std;


// recursive approach

class Solution{
    public :

        int solve(vector<int>&nums,int n){
            if(n < 0){
                return 0;
            }

            if(n == 0){
                return nums[0];
            }

            int incl = solve(nums,n-2) + nums[n];
            int exl = solve(nums,n-1) + 0;

            return max(incl,exl);
        }

        int maxNonAdjacentSum(vector<int>&nums){
            int n = nums.size();
            int ans = solve(nums,n-1);
            return ans;
        }
}

// recursive + memoization

class Solution{
    public :
        int solve(vector<int>&nums,int n,vector<int>&dp){
            if(n < 0){
                return 0;
            }

            if(n == 0){
                return nums[0];
            }

            if(dp[n] != -1){
                return dp[n];
            }

            int incl = solve(nums,n-2,dp) + nums[n];
            int exl = solve(nums,n-1,dp) + 0;

            dp[n] = max(incl,exl);
            return dp[n];
        }

        int maxNonAdjacentSum(vector<int>&nums){
            int n = nums.size();
            vector<int> dp(n,-1);
            int ans = solve(nums,n-1,dp);
            return ans;
        }

}

// tabulation

class Solution{
    public :
        int maxNonAdjacentSum(vector<int>&nums){
            int n = nums.size();
            vector<int> dp(n,0);
            
            dp[0] = nums[0];

            for(int i = 1;i < n;i++){
                int incl = dp[i-2] + nums[i];
                int exl = dp[i-1] + 0;
                dp[i] = max(incl,exl);
            }

            return dp[n-1];
        }
}


// tabulation + space optimization

class Solution{
    public :
        int maxNonAdjacentSum(vector<int>&nums){
            int n = nums.size();
            int prev2 = 0;
            int prev1 = nums[0];

            for(int i = 1;i < n;i++){
                int incl = prev2 + nums[i];
                int exl = prev1 + 0;
                int ans = max(incl,exl);
                prev2 = prev1;
                prev1 = ans;
            }

            return prev1;
        }
}


int main(){

}   