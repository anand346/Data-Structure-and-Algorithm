#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>&arr,int target){

    if(target < 0){
        return 0;
    }
    if(target == 0){
        return 1;
    }

    int ans = 0;
    for(int i = 0;i < arr.size();i++){
        ans += solve(arr,target-arr[i]);
    }
    return ans;
}

// recursion + memoization 
// dp(target+1,-1);

int solve(vector<int>&arr,int target,vector<int> &dp){

    if(target < 0){
        return 0;
    }
    if(target == 0){
        return 1;
    }

    if(dp[target] != -1){
        return dp[target];
    }

    int ans = 0;
    for(int i = 0;i < arr.size();i++){
        ans += solve(arr,target-arr[i],dp);
    }
    dp[target] = ans;
    return dp[target];
}


// tabulation


int solveTab(vector<int>& arr,int tar){

    vector<int> dp(tar+1,0);
    dp[0] = 1;

    for(int i = 1;i <= tar;i++){

        for(int j = 0;j < arr.size();j++){

            if((i - arr[j]) >= 0){
                dp[i] += dp[i-arr[j]];
            }
        }
    }

    return dp[target];
}

int main(){

}