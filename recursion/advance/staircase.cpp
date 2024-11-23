#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countWays(int n){
    if( n == 1 || n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }
    return countWays(n-1) + countWays(n-2) + countWays(n-3);
}
int climbStairs(int n) {
        if(n <= 2){
            return n;
        }
        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3;i <= n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
int main(){
    int n;
    cin>>n;
    cout<<countWays(n)<<endl;
}