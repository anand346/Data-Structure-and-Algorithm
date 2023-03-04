// https://www.youtube.com/watch?v=kVF-KYCcpLs 

#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :
        int res = 0;

        void helper(vector<vector<int>> &mat,int i,int j,int r,int c,int ans){


            if(i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size()){
                return ;
            }

            if(mat[i][j] == -1 || mat[i][j] == 0){
                return ;
            }

            if(i == r && j == c){
                res = max(res,ans);
            }

            mat[i][j] = -1;
            helper(mat,i+1,j,r,c,ans+1);
            helper(mat,i-1,j,r,c,ans+1);
            helper(mat,i,j+1,r,c,ans+1);
            helper(mat,i,j-1,r,c,ans+1);
            mat[i][j] = 1;
        }
        int longestPath(vector<vector<int>> mat, int xs, int ys, int xd, int yd)
        {
            // code here
            if(mat[xs][ys] == 0 || mat[xd][yd] == 0){
                return -1;  
            }

            int ans = 0;
            helper(mat,xs,ys,xd,yd,ans);
            return res;
        }
};




int main(){

}