#include<bits/stdc++.h>
using namespace std;

string removeOuterParenthesis(string s){
    string out = "";
    int opened = 0;
    for(char c : s){
        if(c == '(' && opened++ > 0){
            out += c;
            cout<<"out1: "<<out<<endl;
            cout<<"opened1: "<<opened<<endl;
        }
        
        if(c == ')' && opened-- > 1){
            out += c;
            cout<<"out2: "<<out<<endl;
            cout<<"opened2: "<<opened<<endl;
        }
    }
    return out;
}

int main(){
    string s = "(()())(())";
    cout<<removeOuterParenthesis(s);

}