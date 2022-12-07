// https://leetcode.com/problems/maximum-frequency-stack/solutions/1861911/c-easy-solution-with-explanation-simple-solution/

#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :
        unordered_map<int,int> frequency;
        unordered_map<int,stack<int>> groupStack;

        int max_frequency = 0;
        FreqStack() {
        
        }

        void push(int val){
            frequency[val]++;
            max_frequency = max(max_frequency,frequency[val]);
            groupStack[frequency[val]].push(val);
        }

        int pop(){
            int top_max_freq = max_frequency;
            int ans = groupStack[top_max_freq].top();
            groupStack[top_max_freq].pop();
            frequency[ans]--;
            if(groupStack[max_frequency].size() == 0){
                max_frequency--;
            }
            return ans;
        }
}