// https://www.youtube.com/watch?v=7t8-GmKaDeo

#include<bits/stdc++.h>
using namespace std;

class Solution{

    public :
        int calPoints(vector<string>& operations) {
        
            stack<int> st;

            for(int i = 0;i < operations.size();i++){

                if(operations[i] == "C"){
                    st.pop();
                }else if(operations[i] == "D"){
                    st.push(2*st.top());
                }else if(operations[i] == "+"){
                    int f = st.top();
                    st.pop();
                    int s = st.top();
                    st.push(f);
                    st.push(f+s);
                }else{
                    st.push(atoi(operations[i].c_str()));
                }
            }
            int res = 0;
            while(!st.empty()){
                res += st.top();
                st.pop();
            }
            return res;
        }
}