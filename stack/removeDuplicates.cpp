#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(char input[]){
    if(input[0] == '\0'){
        return ;
    }
    if(input[0] == input[1]){
        for(int i = 0;input[i] != '\0';i++){
            input[i] = input[i+1];
        }
        removeDuplicates(input);
    }else{
        removeDuplicates(input+1);
    }
}
string removeDuplicates1(string input){
    int n = input.length();
    string ans = "";
    for(int i = 0;i < n-1;i++){
        if(input[i] != input[i+1]){
            ans += input[i];
        }
    }
    ans.push_back(input[n-1]);
    return ans;
}
int removeDuplicates2(string &input){
    int n = input.length();
    int strptr = -1;
    for(int i = 0;i < n;i++){
        if(strptr == -1 || (input[strptr] != input[i])){
            strptr++;
            input[strptr] = input[i];
        }
    }
    return strptr+1;
}
int main(){
    char name[] = "aaavvvccc";
    string hello = "mississippi";
    int p = removeDuplicates2(hello);
    for(int i = 0;i < p;i++){
        cout<<hello[i];
    }
    // cout<<name;
}