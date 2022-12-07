//  ayushi sharma's video

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :

        bool checkRedundancy(string str){
            stack<char> st;

            
            for(auto ch : str){
                if(ch == ')'){

                    char temp = st.top();
                    st.pop();
                    bool redundance = true;
                    
                    while(!st.empty() and temp != '('){

                        if(temp == '+' || temp == '-' || temp == '*' || temp == '/'){
                            flag = false;
                        }
                        temp = st.top();
                        st.pop();

                    }
                    if(flag != true){
                        return false;
                    }
                }else{
                    st.push(ch);
                }
            }

            return flag;

        }

};


int main(){

}