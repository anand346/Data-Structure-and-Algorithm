#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        if(s.length() == 0){
            return true;
        }
        int i = 0;
        for(auto c : t){
            if(s[i] == c && ++i == s.length()){
                return true;
            }
        }
        return false;
    }
};

int main(){
    Solution s;
    string s = "anand";
    string t = "hello";
    cout<<s.isSubsequence(s,t);
}