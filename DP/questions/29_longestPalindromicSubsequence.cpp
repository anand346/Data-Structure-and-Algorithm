#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int solveTab(string text1,string text2){

        vector<int> next(text2.length()+1,0);
        vector<int> curr(text2.length()+1,0);
        int ans = 0;
        for(int i = text1.length()-1;i >= 0;i--){
            for(int j = text2.length()-1;j >= 0;j--){
                if(text1[i] == text2[j]){
                    ans = 1 + next[j+1];
                }else{
                    ans = max(next[j],curr[j+1]);
                }

                curr[j] = ans;
            }

            next = curr;
        }

        return next[0];
    }
    int longestPalindromeSubseq(string s) {
        string revStr = s;
        reverse(revStr.begin(),revStr.end());
        return solveTab(s,revStr);
    }
};

int main(){

}