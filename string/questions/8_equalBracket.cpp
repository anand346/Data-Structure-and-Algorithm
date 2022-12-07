#include<bits/stdc++.h>
using namespace std;

int findIndex(string str){

    bool first = true;
    stack<char> st;
    int count = 0;

    for(int i = 0;i < str.length();i++){

        if(str[i] == ')'){
            if(first){
                break;
            }
            if(st.top() == '('){
                st.pop();
                count++;
            }
        }
        if(str[i] == '('){
            st.push(str[i]);
            first = false;
            count++;
        }
    }

    return count;
}
int main(){

}