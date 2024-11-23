#include<bits/stdc++.h>
using namespace std;

string longestPrefix(vector<string> &strs){
    int n = strs.size();
    int minLength = INT_MAX;
    int currentMin = 0;
    string ans = "";
    for(int i = 0;i < n;i++){
        currentMin = strs[i].length();
        minLength = min(minLength,currentMin);
    }

    for(int i = 0;i < minLength;i++){
        char currentChar = strs[0][i];
        for(int j = 0;j < n;j++){
            if(strs[j][i] != currentChar){
                return ans;
            }
        }
        ans += currentChar;
    }
    return ans;
}
int main(){
    vector<string> names = {"flower","flight","flat"};
    cout<<longestPrefix(names);

}