#include<bits/stdc++.h>
using namespace std;


// recursion

int solveRec(vector<int> &num,int target){
    // base case
    if(x == 0){
        return 0;
    }
    if(x < 0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i = 0; i < num.size();i++){
        int ans = solve(num,target-num[i]);
        if(ans != INT_MAX){
            mini = min(mini,ans+1);
        }
    }

    return mini;
}

int minimumElements(vector<int> &num,int x){
    int ans = solveRec(num,x);
    if(ans == INT_MAX){
        return -1;
    }
    return ans;
}


// recursion + memoization

int solveMem(vector<int> &num,int target,vector<int> &dp){
    // base case
    if(x == 0){
        return 0;
    }
    if(x < 0){
        return INT_MAX;
    }

    if(dp[target] != -1){
        return dp[target];
    }
    int mini = INT_MAX;
    for(int i = 0; i < num.size();i++){
        int ans = solve(num,target-num[i]);
        if(ans != INT_MAX){
            mini = min(mini,ans+1);
        }
    }

    dp[target]=  mini;
    return dp[target];
}

int minimumElements(vector<int> &num,int x){

    int n = num.size();
    vector<int> dp(x+1,-1);
    int ans = solveMem(num,x,dp);

    if(ans == INT_MAX){
        return -1;
    }
    return ans;
}


// solveTab

int minimumElements(vector<int> &num,int x){

    int n = num.size();
    vector<int> dp(x+1,INT_MAX);
    dp[0] = 0;
    for(int i = 1;i <= x;i++){

        for(int j = 0;j < num.size();j++){
            if(i-num[j] >= 0 && dp[i-num[j]] != INT_MAX){
                dp[i] = min(dp[i],1+dp[i-num[j]]);
            }
        }
    }

    if(dp[x] == INT_MAX){
        return -1;
    }

    return dp[x];
}

int main(){

}
