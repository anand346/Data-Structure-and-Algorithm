// https://practice.geeksforgeeks.org/problems/divisible-by-73224/1#:~:text=Given%20an%20n%2Ddigit%20large,8955795758%20is%20divisible%20by%207.

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