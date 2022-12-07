// https://www.youtube.com/watch?v=Rkx2ru2q5S0

#include<bits/stdc++.h>
using namespace std;


int stackPermutation(vector<int> in,vector<int> op){
    stack<int> st;
    int j = 0;

    for(int i = 0;i < n;i++){
        st.push(in[i]);

        if(st.top() == op[j]){
            while(!st.empty() and st.top() == op[j]){
                st.pop();
                j++;
            }
        }
    }

    if(st.size() == 0){
        return 1;
    }
    return 0;

}