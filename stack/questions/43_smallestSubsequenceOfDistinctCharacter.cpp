// https://www.youtube.com/watch?v=muDlIlVE1q4
// https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/

#include<bits/stdc++.h>
using namespace std;


string removeDuplicateLetters(string s){
    vector<int> lastIndex(27);
    for(int i= 0;i < s.length();i++){
        lastIndex[s[i]-'a'] = i;
    }

    vector<bool> seen(27);
    stack<int> st;
    for(int i = 0;i < s.length();i++){
        int c = s[i]-'a';
        if(seen[c]) continue;

        while(!st.empty() and st.top() > c and i < lastIndex[st.top()]){
            seen[st.top()] = false;
            st.pop();
        }

        st.push(c);
        seen[c] = true;
    }

    string ans;
    while(!st.empty()){
        ans += (char)(st.top()+'a');
        st.pop();
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){

}