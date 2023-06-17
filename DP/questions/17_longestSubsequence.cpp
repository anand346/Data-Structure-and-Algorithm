#include<bits/stdc++.h>
using namespace std;


// recursion

int solve(int n,int a[],int curr,int prev){

    if(curr == n){
        return 0;
    }

    int take = 0;

    if(prev == -1 || a[curr] > a[prev]){
        take = 1+solve(n,a,curr+1,curr);
    }
    int notTake = 0+solve(n,a,curr+1,prev);

    int ans = max(take,notTake);
    return ans;
}

// recursion + memoization
// vector<vector<int>> dp(n,vector<int>(n+1,-1));
int solve(int n,int a[],int curr,int prev,vector<vector<int>> &dp){

    if(curr == n){
        return 0;
    }

    if( dp[curr][prev+1] != -1){
        return dp[curr][prev+1];
    }
    int take = 0;

    if(prev == -1 || a[curr] > a[prev]){
        take = 1+solve(n,a,curr+1,curr,dp);
    }
    int notTake = 0+solve(n,a,curr+1,prev,dp);

    dp[curr][prev+1] = max(take,notTake);
    return dp[curr][prev+1];
}

// tc n2 sc n2


// tabulation


int longestSubsequence(int n,int a[]){
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for(int curr = n-1;curr >= 0;curr--){
        for(int prev = curr-1;prev >= -1;prev--){

            if(prev == -1 || a[curr] > a[prev]){
                take = 1+dp[curr+1][curr+1];
            }
            int notTake = dp[curr+1][prev+1];
            dp[curr][prev+1] = max(take,notTake);
        }
    }

    return dp[0][0];
}

//tc n2 sc n2

// tabulation + space optimization

int longestSubsequence(int n,int a[]){
    
    vector<int> currRow(n+1,0);
    vector<int> nextRow(n+1,0);

    for(int curr = n-1;curr >= 0;curr--){
        for(int prev = curr-1;prev >= -1;prev--){

            if(prev == -1 || a[curr] > a[prev]){
                take = 1+nextRow[curr+1];
            }
            int notTake = nextRow[prev+1];
            currRow[prev+1] = max(take,notTake);
        }

        nextRow = currRow;
    }

    return nextRow[0];
}

// tc n2 sc O(n)


int solveOptimal(int n,int a[]){

    if(n == 0){
        return 0;
    }

    vector<int> ans;

    ans.push_back(a[0]);
    for(int i = 1;i < n;i++){
        if(a[i] > ans.back()){
            ans.push_back(a[i]);
        }else{
            int index = lower_bound(ans.begin(),ans.end(),a[i]) - ans.begin();
            ans[index] = a[i];
        }
    }

    return ans.size();
}

// tc O(nlogn) sc O(n)

int longestSubsequence(int n,int a[]){
    return solve(n,a,0,-1);
}

int main(){

}