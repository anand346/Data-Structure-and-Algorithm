#include<bits/stdc++.h>
using namespace std;


int romanToInt(string &s){


    unordered_map<char,int> mp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int result = 0;
    for(int i = s.length()-1;i >= 0;i--){
        if(mp[s[i]]*4 > result){
            result += mp[s[i]];
        }else{
            result -= mp[s[i]];
        }
    }
    return result;
}
int main(){
    string s = "XIV";
    int out = romanToInt(s);
    cout<<out;
}