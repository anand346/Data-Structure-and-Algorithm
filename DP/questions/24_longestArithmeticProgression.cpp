#include<bits/stdc++.h>
using namespace std;


// recursion

class Solution{   
public:
    
    int solve(int index,int diff,int a[]){
        if(index < 0){
            return 0;
        }
        
        int ans = 0;
        for(int j = index-1;j >= 0;j--){
            if(a[index]-a[j] == diff){
                ans = max(ans,1+solve(j,diff,a));
            }
        }
        
        return ans;
    }

    int lengthOfLongestAP(int A[], int n) {
        // code here
        
        if(n <= 2){
            return n;
        }
        
        int ans = 0;
        for(int i = 0;i < n;i++){
            for(int j = i+1;j < n;j++){
                ans = max(ans,2+solve(i,A[j]-A[i],A));
            }
        }
        
        return ans;
    }
};

// recursion + memoization


class Solution{   
public:
    
    int solve(int index,int diff,int a[],unordered_map<int,int> dp[]){
        if(index < 0){
            return 0;
        }
        
        if(dp[index].count(diff)){
            return dp[index][diff];
        }
        
        int ans = 0;
        for(int j = index-1;j >= 0;j--){
            if(a[index]-a[j] == diff){
                ans = max(ans,1+solve(j,diff,a,dp));
            }
        }
        
        return dp[index][diff] = ans;
    }

    int lengthOfLongestAP(int A[], int n) {
        // code here
        
        if(n <= 2){
            return n;
        }
        
        unordered_map<int,int> dp[n+1];
        int ans = 0;
        for(int i = 0;i < n;i++){
            for(int j = i+1;j < n;j++){
                ans = max(ans,2+solve(i,A[j]-A[i],A,dp));
            }
        }
        
        return ans;
    }
};

// tabulation


class Solution{   
public:

    int lengthOfLongestAP(int A[], int n) {
        // code here
        
        if(n <= 2){
            return n;
        }
        unordered_map<int,int> dp[n+1];
        int ans = 0;
        for(int i = 1;i < n;i++){
            for(int j = 0;j < i;j++){
                
                int diff = A[i] - A[j];
                int cnt = 1;
                
                if(dp[j].count(diff)){
                    cnt = dp[j][diff];
                }
                
                dp[i][diff] = 1+cnt;
                ans = max(ans,dp[i][diff]);
            }
        }
        
        return ans;
    }
};

int main(){

}