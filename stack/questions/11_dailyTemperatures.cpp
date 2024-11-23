// https://www.youtube.com/watch?v=7MIXlgBfr_U

// https://leetcode.com/problems/daily-temperatures/

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :  
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        vector<int> ans;

        int n = temperatures.size();
        for(int i = n-1;i >= 0;i--){
            if(s.empty()){
                s.push(i);
                ans.push_back(0);
            }else{
                while(!s.empty() and temperatures[s.top()] <= temperatures[i]){
                    s.pop();
                }

                if(s.empty()){
                    s.push(i);
                    ans.push_back(0);
                }else{
                    ans.push_back(s.top()-i);
                    s.push(i);
                }
            }
        }    
        reverse(ans.begin(),ans.end());
        return ans;    
    }

}