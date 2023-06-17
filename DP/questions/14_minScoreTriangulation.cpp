#include<bits/stdc++.h>
using namespace std;

// recursion
int solve(vector<int> &nums,int i,int j){

    if(i+1 == j){
        return 0;
    }

    int ans = INT_MAX;
    for(int k = i+1;k < j;k++){
        ans = min(ans,nums[i]*nums[j]*nums[k]+solve(nums,i,k)+solve(nums,k,j));
    }
    return ans;
}

// memoization
// vector<vector<int>> dp(n,vector<int>(n,-1));
int solve(vector<int> &nums,int i,int j,vector<vector<int>> &dp){

    if(i+1 == j){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int ans = INT_MAX;
    for(int k = i+1;k < j;k++){
        ans = min(ans,nums[i]*nums[j]*nums[k]+solve(nums,i,k ,dp)+solve(nums,k,j,dp));
    }

    dp[i][j] = ans;
    return dp[i][j];
}

// tabulation
int minScoreTriangulation(vector<int>& nums){

    int n = nums.size();
    vector<vector<int>> dp(n,vector<int>(n,0));

    for(int i = n-1;i >= 0;i--){
        for(int j = i+2;j < n;j++){

            int ans = INT_MAX;
            for(int k = i+1;k < j;k++){
                ans = min(ans,nums[i]*nums[j]*nums[k]+dp[i][k]+dp[k][j]);
            }

            dp[i][j] = ans;
        }
    }

    return dp[0][n-1];
}


// research about MCM approach

int minScoreTriangulation(vector<int>& nums){

    int n = nums.size();
    return solve(nums,0,n-1);
}

int main(){


}