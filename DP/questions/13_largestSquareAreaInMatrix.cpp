#include<bits/stdc++.h>
using namespace std;

// recursion
//i = 0,j=0,maxi = 0;

int solve(int i,int j,vector<vector<int>>& mat,int maxi){

    if(i >= mat.size() || j >= mat[0].size()){
        return 0;
    }

    int right = solve(i,j+1,mat,maxi);
    int down = solve(i+1,j,mat,maxi);
    int diagnol = solve(i+1,j+1,mat,maxi);

    if(mat[i][j] == '1'){
        int ans = 1 + min(right,min(diagnol,down));
        maxi = max(maxi,ans);
        return ans;
    }else{
        return 0;
    }
}

// memoization
//maxi = 0; vector<vector<int>> dp(n,vector<int>(m,-1))


int solve(int i,int j,vector<vector<int>>& mat,int maxi,vector<vector<int>> &dp){

    if(i >= mat.size() || j >= mat[0].size()){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int right = solve(i,j+1,mat,maxi,dp);
    int down = solve(i+1,j,mat,maxi,dp);
    int diagnol = solve(i+1,j+1,mat,maxi,dp);

    if(mat[i][j] == '1'){
        dp[i][j] = 1 + min(right,min(diagnol,down));
        maxi = max(maxi,dp[i][j]);
        return dp[i][j];
    }else{
        return dp[i][j] = 0;
    }
}


// tabulation
// maxi = 0

int solveTab(vector<vector<int>> &mat,int& maxi){

    int row = mat.size();
    int col = mat[0].size();

    vector<vector<int>> dp(row+1,vector<int>(col+1,0));

    for(int i = row-1;i >= 0;i--){

        for(int j = col-1;j >= 0;j--){

            int right = dp[i][j+1];
            int down = dp[i+1][j];
            int diagnol = dp[i+1][j+1];

            if(mat[i][j] == '1'){
                dp[i][j] = 1 + min(right,min(diagnol,down));
                maxi = max(maxi,dp[i][j]);
            }else{
                dp[i][j] = 0;
            }
        }
    }

    return dp[0][0];
}

int maxSquare(int n, int m, vector<vector<int>>& mat){
    // code here
    int maxi = 0;
    solveTab(mat,maxi);
    return maxi;
    
}

// tabulation + space optimization O(m)


int solveTab(vector<vector<int>> &mat,int maxi){

    int row = mat.size();
    int col = mat[0].size();

    vector<int> curr(col+1,0);
    vector<int> next(col+1,0);

    for(int i = row-1;i >= 0;i--){

        for(int j = col-1;j >= 0;j--){

            int right = curr[j+1];
            int down = next[j];
            int diagnol = next[j+1];

            if(mat[i][j] == '1'){
                curr[j] = 1 + min(right,min(diagnol,down));
                maxi = max(maxi,curr[j]);
            }else{
                curr[j] = 0;
            }
        }

        next = curr;
    }

    return next[0];
}

// space optimized O(1)
// O(1) space complexity is based on just making the given matrix as a dp memory.

// int space_optimization1(int m ,int n, vector<vector<int>>&mat){
    
//     int maxi = 0;
//     for(int i=n-1; i>=0; i--){
//         for(int j=m-1; j>=0; j--){
//             int down = i<n-1?mat[i+1][j]:0;
//             int right = j<m-1? mat[i][j+1]:0;
//             int diag = i<n-1 and j<m-1? mat[i+1][j+1]:0;
//             // if(dp[i][j] == 1)
//             if(mat[i][j] == 1){
//                 mat[i][j] = 1 + min(down,min(right, diag));
//                 maxi = max(mat[i][j],maxi);
//             }
//         }
//     }
//     return maxi;
// }

int main(){


}