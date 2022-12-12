// https://www.youtube.com/watch?v=6yOWLXlWOJc
// https://leetcode.com/problems/decode-string/


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
   
    string decodeString(string s) {
        string res = "";
        stack<int> si;
        stack<string> ss;
        int i = 0;
        while(i < s.length()){
            if(isdigit(s[i])){
                int count = 0;
                while(isdigit(s[i])){
                    count = count*10 + (s[i] - '0');
                    i++;
                }
                si.push(count);
            }else if(s[i] == '['){
                ss.push(res);
                res = "";
                i++;
            }else if(s[i] == ']'){
                string temp = ss.top();
                ss.pop();
                int repeatTime = si.top();
                si.pop();
                for(int i = 0;i < repeatTime ;i++){
                    temp += res;
                }
                res = temp;
                i++;
            }else{
                res += s[i++];
            }
        }
        return res;
    }
};

Input: s = "2[abc]3[cd]ef"
Output: "abcabccdcdcdef"

