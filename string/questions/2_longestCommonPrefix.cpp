#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(string s[],int n){


    int minLength = INT_MAX;
    string S = "";
    for(int i = 0;i < n;i++){
        if(s[i].length() < minLength){
            minLength = s[i].length();
            S = s[i];
        }
    }


    bool flag = true;
    int count = 0;
    for(int i = 0;i < minLength;i++){
        for(int j = 0;j < n;j++){
            if(s[j][i] != S[i]){
                flag = false;
            }
        }
        if(flag == false){
            break;
        }
        count++;
    }
    if(count == -1){
        return "-1";
    }
    return S.substr(0,count);

}
int main(){
    string s[4] = {"geeksforgeeks", "geeks", "geek", "geezer"};
    string output = longestCommonPrefix(s,4);
    cout<<output;
}