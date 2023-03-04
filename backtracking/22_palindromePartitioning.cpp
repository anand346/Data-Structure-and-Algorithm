#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :

        bool isPalindrome(string s){
            int l = 0;
            int r = s.size()-1;
            while(l < r){
                if(s[l++] != s[r--]){
                    return false;
                }
            }

            return true;
        }

        void helper(string s, vector<vector<string>> &result,vector<string> temp){

            if(s.size() == 0){
                result.push_back(temp);
            }

            for(int i = 0;i < s.size();i++){
                string leftPar = s.substr(0,i+1);
                if(isPalindrome(leftPar)){
                    temp.push_back(leftPar);
                    helper(s.substr(i+1),result,temp);
                    temp.pop_back();
                }
            }
        }


        vector<vector<string>> partition(string s){
            vector<vector<string>> result;

            vector<string> temp;
            helper(s,result,temp);
            return result;
        }
};

int main(){
    string str = "aab";
    Solution s;

    vector<vector<string>> res = s.partition(str);

    for(int i = 0;i < res.size();i++){
        for(int j = 0;j < res[0].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}