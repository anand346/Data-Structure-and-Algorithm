// https://youtu.be/TKk1NBMY8As

#include<bits/stdc++.h>
using namespace std;

class Solution{

    public :


        bool search(int idx,int i,int j, vector<vector<char>> &board,string word){
            if(idx == word.size()){
                return true;
            }

            if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size()){
                return false;
            }

            bool ans = false;

            if(word[idx] == board[i][j]){
                board[i][j] = '*';
                ans = search(idx+1,i+1,j,board,word) || search(idx+1,i-1,j,board,word) || search(idx+1,i,j+1,board,word) || search(idx+1,i,j-1,board,word);

                board[i][j] = word[idx];

            }
            return ans;
        }

        bool exists(vector<vector<char>> &board,string word){
            int m = board[0].size();
            int n = board.size();

            int idx = 0;
            bool ans = false;


            for(int i = 0;i < n;i++){
                for(int j = 0;j < m;j++){
                    if(word[idx] == board[i][j]){
                        if(search(idx,i,j,board,word)){
                            return true;
                        }
                    }
                }
            }

            return ans;
        }
}

int main(){

    Solution s;
    
}