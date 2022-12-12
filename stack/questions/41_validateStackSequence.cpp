// https://leetcode.com/problems/validate-stack-sequences/
// https://www.youtube.com/watch?v=zafraJVHUGU

#include<bits/stdc++.h>
using namespace std;

bool validateStackSequence(vector<int> push, vector<int> pop){

    stack<int> st;
    for(int i = 0,j = 0;i < pushed.size();i++){
        st.push(pushed[i]);
        while(!st.empty() and st.top() == popped[j]){
            st.pop();
            j++;
        }
    }
    return st.empty();
}
