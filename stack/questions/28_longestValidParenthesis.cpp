// https://www.youtube.com/watch?v=ULLkiR8xxUk

#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :
        int findMaxLen(string s){

            if(s.length() < 2){
                return 0;
            }

            stack<int> st; 
            for(int i = 0;i < s.length();i++){
                if(s[i] == '('){
                    st.push(i);
                }else{
                    if(!st.empty() and s[st.top()] == '('){
                        st.pop();
                    }else{
                        st.push(i);
                    }
                }
            }

            int max_len = 0;
            int end = s.length();

            while(!st.empty()){
                int ele = st.top();
                st.pop();
                max_len = max(max_len,(end-ele)-1);
                end = ele;
            }

            return max(end,max_len);
        }
}

int main(){

}