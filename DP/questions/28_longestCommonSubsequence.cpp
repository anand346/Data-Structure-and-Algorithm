#include<bits/stdc++.h>
using namespace std;


// recursion
class Solution {
public:

    int solve(string text1,string text2,int i,int j){
        if(i == text1.length()){
            return 0;
        }
        if(j == text2.length()){
            return 0;
        }

        int ans = 0;
        if(text1[i] == text2[j]){
            ans = 1 + solve(text1,text2,i+1,j+1);
        }else{
            ans = max(solve(text1,text2,i+1,j),solve(text1,text2,i,j+1));
        }
        return ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        return solve(text1,text2,0,0);
    }
};


// recursion + memoization


class Solution {
public:

    int solve(string text1,string text2,int i,int j,vector<vector<int>> &dp){
        if(i == text1.length()){
            return 0;
        }
        if(j == text2.length()){
            return 0;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        int ans = 0;
        if(text1[i] == text2[j]){
            ans = 1 + solve(text1,text2,i+1,j+1,dp);
        }else{
            ans = max(solve(text1,text2,i+1,j,dp),solve(text1,text2,i,j+1,dp));
        }
        return dp[i][j] = ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.length(),vector<int>(text2.length(),-1));
        return solve(text1,text2,0,0,dp);
    }
};

// tabulation

class Solution {
public:

    int solveTab(string text1,string text2){
        vector<vector<int>> dp(text1.length()+1,vector<int>(text2.length()+1,0));

        int ans = 0;
        for(int i = text1.length()-1;i >= 0;i--){
            for(int j = text2.length()-1;j >= 0;j--){
                if(text1[i] == text2[j]){
                    ans = 1 + dp[i+1][j+1];
                }else{
                    ans = max(dp[i+1][j],dp[i][j+1]);
                }

                dp[i][j] = ans;
            }
        }

        return dp[0][0];
    }
    int longestCommonSubsequence(string text1, string text2) {
        return solveTab(text1,text2);
    }
};

// tabular + space optimization


class Solution {
public:

    int solveTab(string text1,string text2){

        vector<int> next(text2.length()+1,0);
        vector<int> curr(text2.length()+1,0);
        int ans = 0;
        for(int i = text1.length()-1;i >= 0;i--){
            for(int j = text2.length()-1;j >= 0;j--){
                if(text1[i] == text2[j]){
                    ans = 1 + next[j+1];
                }else{
                    ans = max(next[j],curr[j+1]);
                }

                curr[j] = ans;
            }

            next = curr;
        }

        return next[0];
    }
    int longestCommonSubsequence(string text1, string text2) {
        return solveTab(text1,text2);
    }
};


int main(){

}