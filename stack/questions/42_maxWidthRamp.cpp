// https://www.youtube.com/watch?v=_TkAgiKixAk
// https://leetcode.com/problems/maximum-width-ramp

#include<bits/stdc++.h>
using namespace std;

int maxWidthRamp(vector<int> &nums){

    stack<int> st;


    for(int i = 0;i < nums.size();i++){
        if(st.empty() or nums[st.top()] > nums[i]){
            st.push(i);
        }
    }

    int ans = 0;
    for(int i = nums.size()-1;i > ans;i--){
        while(!st.empty() and nums[st.top()] <= nums[i]){
            ans = max(ans,i - st.top());
            st.pop();
        }
    }
    return ans;
}


int main(){


}