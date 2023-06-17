#include<bits/stdc++.h>
using namespace std;

// recursion
class Solution{
public:

    bool solve(int index,int arr[],int n,int target){
        
        if(target < 0){
            return 0;
        }
        if(index >= n){
            return 0;
        }
        if(target == 0){
            return 1;
        }
        
        bool incl = solve(index+1,arr,n,target-arr[index]);
        bool excl = solve(index+1,arr,n,target);
        
        return incl or excl;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int total = 0;
        for(int i = 0;i < N;i++){
            total += arr[i];
        }
        
        if(total & 1){
            return 0;
        }
        
        int target = total/2;
        
        return solve(0,arr,N,target);
    }
};


// recursion + memoization


class Solution{
public:

    bool solve(int index,int arr[],int n,int target,vector<vector<int>>& dp){
        
        if(target < 0){
            return 0;
        }
        if(index >= n){
            return 0;
        }
        if(target == 0){
            return 1;
        }
        
        if(dp[index][target] != -1){
            return dp[index][target];
        }
        
        bool incl = solve(index+1,arr,n,target-arr[index],dp);
        bool excl = solve(index+1,arr,n,target,dp);
        
        return dp[index][target] = incl or excl;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int total = 0;
        for(int i = 0;i < N;i++){
            total += arr[i];
        }
        
        if(total & 1){
            return 0;
        }
        
        int target = total/2;
        
        vector<vector<int>> dp(N,vector<int>(target+1,-1));
        
        return solve(0,arr,N,target,dp);
    }
};

// tabular


class Solution{
public:

    bool solveTab(int arr[],int n,int total){
        vector<vector<int>> dp(n+1,vector<int>((total/2)+1,0));
        
        for(int i = 0;i <= n;i++){
            dp[i][0] = 1;
        }
        
        for(int index = n-1;index >= 0;index--){
            for(int target = 0;target <= total/2;target++){
                
                bool incl = 0;
                if((target - arr[index]) >= 0){
                    incl = dp[index+1][target-arr[index]];       
                }
                bool excl = dp[index+1][target];
                
                dp[index][target] = incl or excl;
            }
        }
        return dp[0][total/2];
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int total = 0;
        for(int i = 0;i < N;i++){
            total += arr[i];
        }
        
        if(total & 1){
            return 0;
        }
        
        int target = total/2;
        return solveTab(arr,N,total);
    }
};

// tabulation + space optimization



class Solution{
public:

    bool solveTab(int arr[],int n,int total){
        
        vector<int> curr((total/2)+1,0);
        vector<int> next((total/2)+1,0);
        
        curr[0] = 1;
        next[0] = 1;
        
        for(int index = n-1;index >= 0;index--){
            for(int target = 0;target <= total/2;target++){
                
                bool incl = 0;
                if((target - arr[index]) >= 0){
                    incl = next[target-arr[index]];       
                }
                bool excl = next[target];
                
                curr[target] = incl or excl;
            }
            next = curr;
        }
        return next[total/2];
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int total = 0;
        for(int i = 0;i < N;i++){
            total += arr[i];
        }
        
        if(total & 1){
            return 0;
        }
        
        int target = total/2;
        
        
        
        return solveTab(arr,N,total);
    }
};

int main(){

}