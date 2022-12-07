#include<bits/stdc++.h>
using namespace std;
bool isValid(string s){
    stack<char> c;
    for(int i = 0;i < s.length();i++){
        if(s[i] == '[' || s[i] == '(' ||s[i] == '{'){
            c.push(s[i]);
        }else{
            if(s.empty()){
                return false;
            }else if(s[i] == ']'){
                if(c.top() == '['){
                    c.pop();
                }else{
                    return false;
                }
            }else if(s[i] == '}'){
                if(c.top() == '{'){
                    c.pop();
                }else{
                    return false;
                }
            }else if(s[i] == ')'){
                if(c.top() == '('){
                    c.pop();
                }else{
                    return false;
                }
            }
        }
    }
    return c.empty();
}
int main(){
    string s = "({[]}))";
    cout<<isValid(s);
}