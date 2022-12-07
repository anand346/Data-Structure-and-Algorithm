#include<bits/stdc++.h>
using namespace std;

bool divisibleBySeven(string s){

    int num = 0;
    for(int i = 0;i < s.length();i++){
        num = num*10 + (s[i]-'0');
        num %= 7;
    }

    if(num == 0){
        return true;
    }else{
        return false;
    }
}
int main(){
    string inp = "1000";
    cout<<divisibleBySeven(inp);
}