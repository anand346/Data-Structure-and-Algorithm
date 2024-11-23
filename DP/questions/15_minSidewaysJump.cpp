#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &obstacles,int currlane,int currpos){

    int n = obstacles.size()-1;
    if(currpos == n){
        return 0;
    }
    if(obstacles[currpos+1] != currlane){
        return solve(obstacles,currlane,currpos+1);
    }else{
        int ans = INT_MAX;

        for(int i = 1;i <= 3;i++){

            if(currlane != i && obstacles[currpos] != i){
                ans = min(ans,1+solve(obstacles,i,currpos));
            }
        }
        return ans;
    }
}

// memoization
// vector<vector<int>> dp(4,vector<int>(obstacles.size(),-1));
int solve(vector<int> &obstacles,int currlane,int currpos,vector<vector<int>> &dp){

    int n = obstacles.size()-1;
    if(currpos == n){
        return 0;
    }

    if(dp[currlane][currpos] != -1){
        return dp[currlane][currpos];
    }
    if(obstacles[currpos+1] != currlane){
        return solve(obstacles,currlane,currpos+1);
    }else{
        int ans = INT_MAX;

        for(int i = 1;i <= 3;i++){

            if(currlane != i && obstacles[currpos] != i){
                ans = min(ans,1+solve(obstacles,i,currpos,dp));
            }
        }
        dp[currlane][currpos] = ans;
        return dp[currlane][currpos];
    }
}

// tabulation


int minSidewaysJump(vector<int> &obstacles){

    int n = obstacles.size()-1;
    vector<vector<int>> dp(4,vector<int>(obstacles.size(),1e9));

    dp[0][n] = 0;
    dp[1][n] = 0;
    dp[2][n] = 0;
    dp[3][n] = 0;

    for(int currpos = n-1;currpos >= 0;currpos--){
        for(int currlane = 1;currlane <= 3;currlane++){
            
            if(obstacles[currpos+1] != currlane){
                dp[currlane][currpos] = dp[currlane][currpos+1];
            }else{
                int ans = 1e9;

                for(int i = 1;i <= 3;i++){

                    if(currlane != i && obstacles[currpos] != i){
                        ans = min(ans,1+dp[i][currpos+1]);
                    }
                }
                dp[currlane][currpos] = ans;
            }

        }
    }
    return min(dp[2][0],min(1+dp[1][0],1+dp[3][0]));
}




// space optimization

int minSidewaysJump(vector<int> &obstacles){

    int n = obstacles.size()-1;
    // vector<vector<int>> dp(4,vector<int>(obstacles.size(),1e9));

    vector<int> curr(4,INT_MAX);
    vector<int> next(4,INT_MAX);

    next[0] = 0;
    next[1] = 0;
    next[2] = 0;
    next[3] = 0;

    for(int currpos = n-1;currpos >= 0;currpos--){
        for(int currlane = 1;currlane <= 3;currlane++){
            
            if(obstacles[currpos+1] != currlane){
                curr[currlane] = next[currlane];
            }else{
                int ans = 1e9;

                for(int i = 1;i <= 3;i++){

                    if(currlane != i && obstacles[currpos] != i){
                        ans = min(ans,1+next[i]);
                    }
                }
                curr[currlane] = ans;
            }

        }
        next = curr;
    }
    return min(next[2],min(1+next[1],1+next[3]));
}


// Tabulation ki better aur intutive approach :
//  int solveTab(vector<int> &obstacles){
//         int n = obstacles.size();
//         vector<vector<int>> dp(4,vector<int>(n,999));
//         dp[2][0] = 0;
//         for(int r = 1 ; r<=3;r++){
//             if(r!=2) dp[r][0] = 1;
//         }

//         for(int c = 1 ; c<= n-1;c++){
//             for(int r =1; r<=3;r++){
//                 if(obstacles[c] != r){
//                     if(obstacles[c-1] != r ) dp[r][c] = dp[r][c-1];
//                     else{
//                         int ans = INT_MAX;
//                         for(int i = 1; i <= 3 ;i++){
//                             if(i != r && obstacles[c] != i )
//                             ans = min (ans,1 + dp[i][c-1]);
//                         }
//                         dp[r][c] = ans;
//                     }
//                 }
//             }
//         }

//         int res = INT_MAX;
//         for(int k = 1 ;k<=3; k++){
//             res = min (res,dp[k][n-1]);
//         }
//         //  for(auto v : dp){
//         //      for(auto it : v){
//         //          cout<<it<<" ";
//         //      }cout<<endl;
//         //  }

//         return res;
//     }

int minSidewaysJump(vector<int> &obstacles){

    return solve(obstacles,2,0);
}

int main(){

}