// https://leetcode.com/problems/score-of-parentheses/
// https://www.youtube.com/watch?v=Pv35fyoKtUA

#include<bits/stdc++.h>
using namespace std;


int scoreOfParentheses(string s) {
    int count = 0;

    stack<int> st;
    for(char c : s){
        int val = 0;
        if(c == '('){
            st.push(0);
        }else{
            while(st.top() != 0){
                val += st.top();
                st.pop();
            } 
            val = max(2*val,1);
            st.pop();
            st.push(val);
        }
    }

    while(!st.empty()){
        count += st.top();
        st.pop();
    }
    return count;
}