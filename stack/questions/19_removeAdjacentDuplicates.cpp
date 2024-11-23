#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string removeDuplicates(string A) {
        stack<char> s;
        for(int i=0;i<A.size();i++){
            //  if(s.empty() || A[i] != s.top()){
            //      s.push(A[i]);
            //  } else {
            //      s.pop();
            //  }
             if(s.empty()){
                 s.push(A[i]);
             } else {
                 if(s.top() == A[i]){
                     s.pop();
                 }else{
                     s.push(A[i]);
                 }
                 
             }
         }
        string ans="";
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};