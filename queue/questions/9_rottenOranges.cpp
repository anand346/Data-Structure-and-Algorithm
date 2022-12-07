// https://www.youtube.com/watch?v=H-p_MaL0g-A
// https://practice.geeksforgeeks.org/problems/rotten-oranges2536/1

#include<bits/stdc++.h>
using namespace std;


int rottenOranges(vector<vector<int>> grid){

    queue<pair<int,int>> q;

    int r = grid.size();
    int c = grid[0].size();

    for(int i = 0;i < r;i++){

        for(int j = 0;j < c;j++){
            if(grid[i][j] == 2){
                q.push({i,j});
            }
        }
    }

    int count = 0;
    q.push({-1,-1});

    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;
        if(i == -1 and j == -1 && and q.size() == 1){
            q.pop();
            break;
        }else if(i == -1 and j == -1 and q.size() > 1){
            count++;
            q.pop();
            q.push({-1,-1});

        }else{
            if((i-1) >= 0 and grid[i-1][j] == 1){
                grid[i-1][j] = 2;
                q.push({i-1,j});
            }
            if((j-1) >= 0 and grid[i][j-1] == 1){
                grid[i][j-1] = 2;
                q.push({i,j-1});
            }
            if((i+1) < r and grid[i+1][j] == 1){
                grid[i+1][j] = 2;
                q.push({i+1,j});
            }
            if((j+1) < c and grid[i][j+1] == 1){
                grid[i][j+1] = 2;
                q.push({i,j+1});
            }
            q.pop();
        }
    }

    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            if(grid[i][j] == 1){
                return -1;
            }
        }
    }

    return count;


}