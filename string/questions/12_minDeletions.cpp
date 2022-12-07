#include<bits/stdc++.h>
using namespace std;


int helper(string str,int i,int j){
    if(i >= j){
        return 0;
    }

    if(str[i] == str[j]){
        return helper(str,i+1,j-1);
    }

    return 1 + min(helper(str,i+1,j),helper(str,i,j-1));
}
int minDeletions(string str){

    int result = 0;
    int n = str.length();
    result = helper(str,0,n-1);
    return result;
}
int main(){
    string inp = "aebcbda";
    cout<<minDeletions(inp);

}