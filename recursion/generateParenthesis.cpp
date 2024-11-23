//striver

#include<bits/stdc++.h>
using namespace std;


void helper(vector<string> &ans,string &paren,int left,int right){
        
    if(left < 0 || left > right) return ;
    
    if(left + right == 0){
        ans.push_back(paren);
        return ;
    }
    
    paren.push_back('(');
    helper(ans,paren,left-1,right);
    paren.pop_back();
    paren.push_back(')');
    helper(ans,paren,left,right-1);
    paren.pop_back();
}


vector<string> AllParenthesis(int n) 
{
    // Your code goes here 
    vector<string> ans;
    string paren = "";
    helper(ans,paren,n,n);
    return ans;
}

int main(){

}