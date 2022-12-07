// https://www.youtube.com/watch?v=7AhF1h1fGnk
// https://practice.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> nearest(vector<vector<int>> grid){


    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> ans(n,vector<int>(m,INT_MAX));
    queue<pair<int,int>> q;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(grid[i][j] == 1){
                ans[i][j] = 0;
                q.push({i,j});
            }
        }
    }

    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;

        if((i-1) >= 0 and ans[i][j]+1 < ans[i-1][j]){
            ans[i-1][j] = ans[i][j] + 1;
            q.push({i-1,j});
        }

        if((j-1) >= 0 and ans[i][j]+1 < ans[i][j-1]){
            ans[i][j-1] = ans[i][j]+1;
            q.push({i,j-1});
        }

        if((i+1) < n and ans[i][j]+1 < ans[i+1][j]){
            ans[i+1][j] = ans[i][j]+1;
            q.push({i+1,j});
        }
        if((j+1) < m and ans[i][j]+1 < ans[i][j+1]){
            ans[i][j+1] = ans[i][j]+1;
            q.push({i,j+1});
        }
        q.pop();
    }
    return ans;
}

int main(){


}