#include<bits/stdc++.h>
using namespace std;

// iteration


// Time: O(n)
// Space: O(1)
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        for(int i = 2;i < n;i++){
            cost[i] += min(cost[i-1],cost[i-2]);
        }
        return min(cost[n-1],cost[n-2]);
    }
};


// recursion
class Solution{
    public :

        int solve(vector<int> cost,int n){
            if(n == 0){
                return cost[0];
            }

            if(n == 1){
                return cost[1];
            }

            int ans = cost[n] + min(solve(cost,n-1),solve(cost,n-2));
            return ans;
        }

        int minCostClimbingStairs(vector<int>&cost){

            int n = cost.size();
            int ans = min(solve(cost,n-1),solve(cost,n-2));
            return ans;
        }
}

// recursion + memoization

class Solution{
    public :

        int solve(vector<int> cost,int n,vector<int>&dp){
            if(n == 0){
                return cost[0];
            }

            if(n == 1){
                return cost[1];
            }

            if(dp[n] != -1){
                return dp[n];
            }

            dp[n] = cost[n] + min(solve(cost,n-1),solve(cost,n-2));
            return dp[n];
        }

        int minCostClimbingStairs(vector<int>&cost){

            int n = cost.size();

            vector<int> dp(n+1,-1);
            int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));
            return ans;
        }
}

class Solution{
    public :

        int solve3(vector<int> cost,int n){
            vector<int> dp(n+1);

            dp[0] = cost[0];
            dp[1] = cost[1];

            for(int i = 2;i < n;i++){
                dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
            }

            return min(dp[n-1],dp[n-2]);
        }

        solve4(vector<int> cost,int n){
            int prev1 = cost[0];
            int prev2 = cost[1];

            for(int i = 2;i < n;i++){
                int curr = cost[i] + min(prev1,prev2);
                prev2 = prev1;
                prev1 = curr;
            }

            return min(prev1,prev2);
        }

        int minCostClimbingStairs(vector<int>&cost){

            int n = cost.size();

            vector<int> dp(n+1,-1);
            int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));
            return ans;
        }
}


int main(){

}