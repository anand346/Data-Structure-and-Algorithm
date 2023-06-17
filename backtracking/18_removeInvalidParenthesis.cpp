// https://youtu.be/y7Us-H5um0M

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public :
        vector<string> res;
        unordered_map<string,int> mp;

        void solve(string s,int minInvalid){

            if(mp[s] != 0){
                return ;
            }else{
                mp[s]++;
            }

            if(minInvalid < 0){
                return ;
            }

            if(minInvalid == 0){
                if(!getMinInvalid(s)){
                    res.push_back(s);
                }
                return ;
            }

            for(int i = 0;i < s.size();i++){
                string left = s.substr(0,i); // it will run till (i-1) and will not include i(th) element
                string right = s.substr(i+1);
                solve(left+right,minInvalid-1); 
            }
            return ;
        }

        int getMinInvalid(string s){
            stack<char> stk;
            int i = 0;
            while(i < s.size()){
                if(s[i] == '('){
                    stk.push('(');
                }else if(s[i] == ')'){
                    if(stk.size() > 0 && stk.top() == '('){
                        stk.pop();
                    }else{
                        stk.push(')');
                    }
                }
                i++;
            }
            return stk.size();
        }

        vector<string> removeInvalidParenthesis(string s){
            solve(s,getMinInvalid((s)));
            return res;
        }

};







int main(){

}