#include<bits/stdc++.h>
using namespace std;

// ayushi sharma https://www.youtube.com/watch?v=1EjU5m0H5uI
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        
        vector<string> result;
        string parens;
        
        helper(result,parens,n,n);
        return result;
    }
    
    void helper(vector<string> &result,string &parens,int right,int left){
        
        if(left > right || left < 0) return ;
        
        if(right + left == 0){
            result.push_back(parens);
            return ;
        }
        
        parens.push_back('(');
        helper(result,parens,right,left-1);
        parens.pop_back();
        parens.push_back(')');
        helper(result,parens,right-1,left);
        parens.pop_back();
    }
};