// https://youtu.be/2j7Ljbef8zM

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :
        vector<string> ans;

         void solve(vector<vector<int>> &m,int n,int i,int j,string current){
            if(i == n-1 && j == n-1){
                if(m[i][j] == 1){
                    ans.push_back(current);
                    return ;
                }
            }

            if(i < 0 || j < 0 || i >= n || j >= n || m[i][j] == 0) return ;
            
            m[i][j] = 0;
            solve(m,n,i,j+1,current+'R');
            solve(m,n,i-1,j,current+'U');
            solve(m,n,i+1,j,current+'D');
            solve(m,n,i,j-1,current+'L');
            m[i][j] = 1;
            
         }

        vector<string> findPath(vector<vector<int>> &m,int n){

            solve(m,n,0,0,"");
            return ans;
        }

}

int main(){

}