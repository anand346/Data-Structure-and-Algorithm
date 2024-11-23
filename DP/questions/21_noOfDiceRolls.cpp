#include<bits/stdc++.h>
using namespace std;


int solve(int dice,int faces,int target){

    if(target < 0){
        return 0;
    }

    if(dice == 0 && target != 0){
        return 0;
    }
    if(target == 0 && dice != 0){
        return 0;
    }
    if(dice == 0 && target == 0){
        return 1;
    }

    long long ans = 0;
    for(int i = 1;i <= faces;i++){
        ans = ans + solve(dice-1,faces,target-i);
    }

    return ans;
}


// memoization


// vector<vector<int>> dp(N+1,vector<int>(X+1,-1));
int solve(int dice,int faces,int target,vector<vector<int>> &dp){

    if(target < 0){
        return 0;
    }

    if(dice == 0 && target != 0){
        return 0;
    }
    if(target == 0 && dice != 0){
        return 0;
    }
    if(dice == 0 && target == 0){
        return 1;
    }

    if(dp[dice][target] != -1){
        return dp[dice][target];
    }

    long long ans = 0;
    for(int i = 1;i <= faces;i++){
        ans = ans + solve(dice-1,faces,target-i,dp);
    }

    return dp[dice][target] = ans;

}


// tabulation

int noOfWays(int f,int d,int t){
    vector<vector<int>> dp(d+1,vector<int>(t+1,0));

    dp[0][0] = 1;

    for(int dice = 1;dice <= d;dice++){

        for(int target = 1;target <= t;target++){

            long long ans = 0;
            for(int i = 1;i <= f;i++){
                if((target - i) >= 0){
                    ans = ans + dp[dice-1][target-i];
                }
            }
            dp[dice][target] = ans;
        }
    }

    return dp[d][t];
}

// tabulation + space optimization

int noOfWays(int f,int d,int t){
    
    vector<int> prev(t+1,0);
    vector<int> curr(t+1,0);

    prev[0] = 1;

    for(int dice = 1;dice <= d;dice++){

        for(int target = 1;target <= t;target++){

            long long ans = 0;
            for(int i = 1;i <= f;i++){
                if((target - i) >= 0){
                    ans = ans + prev[target-i];
                }
            }
            curr[target] = ans;
        }
        prev = curr;
    }

    return prev[t];
}



int noOfWays(int M,int N,int X){
    return solve(N,M,X);
}

int main(){

}