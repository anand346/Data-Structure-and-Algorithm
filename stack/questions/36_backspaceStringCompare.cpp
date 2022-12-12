// https://www.youtube.com/watch?v=96-d8ZPjHeE
// https://leetcode.com/problems/backspace-string-compare/solutions/136876/official-solution/


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> st;

        for(auto c : s){
            if(c != '#'){
                st.push(c);
            }else if(!st.empty()){
                st.pop();
            }
        }

        stack<char> tt;
        for(auto c : t){
            if(c != '#'){
                tt.push(c);
            }else if(!tt.empty()){
                tt.pop();
            }
        }

        while(!st.empty() and !tt.empty()){
            char c = st.top();
            char d = tt.top();
            if(c != d){
                return false;
            }
            st.pop();
            tt.pop();
        }

        return st.empty() and tt.empty();
    }
};