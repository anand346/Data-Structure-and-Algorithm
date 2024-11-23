#include<bits/stdc++.h>
using namespace std;

// usign rec
int solveUtilRec(int idx,vector<int>&heights,int k){

    if(idx == 0) return 0;
    int minSteps = INT_MAX;
    for(int i = 1;i <= k;i++){
        if(idx-i >= 0){
            int jump = solveUtilRec(idx-i,heights,k) + abs(heights[idx]-heights[idx-i]);
            minSteps = min(jump,minSteps);
        }
    }

    return minSteps;
}

// rec + memoization

int solveUtil(int idx,vector<int>& heights,vector<int> &dp,int k){
    if(idx == 0) return 0;
    if(dp[idx] != -1) return dp[idx];

    int minSteps = INT_MAX;

    for(int j = 1;j <= k;j++){
        if(ind-j >= 0){
            int jump = solveUtil(idx-j,height,dp,k) + abs(height[idx]-height[idx-j]);
            minSteps = min(jump,minSteps);
        }
    }

    return dp[idx] = minSteps;
}

// tabular

int solveUtil2(int n, vector<int>& height, vector<int>& dp, int k){
    dp[0]=0;
    for(int i=1;i<n;i++){
        int mmSteps = INT_MAX;
        
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int jump = dp[i-j]+ abs(height[i]- height[i-j]);
                mmSteps= min(jump, mmSteps);
            }
        }
        dp[i]= mmSteps;
    }
    return dp[n-1];
}

int solve(int n,vector<int>& heights,int k){
    vector<int> dp(n,-1);
    return solveUtil(n-1,height,dp,k);
}

int main(){
    
}