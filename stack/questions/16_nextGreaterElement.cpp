// https://leetcode.com/problems/next-greater-element-ii/solutions/2667737/c-2-stacks-and-1-stack-approach-98-faster-linear-time/


#include<bits/stdc++.h>
using namespace std;

class Solution{

    public :
        vector<int> nextGreaterElements(vector<int>& nums) {

            int n = nums.size();
            vector<int> ans(n,-1);
            stack<int> st;

            for(int i = 0;i < 2*n-1;i++){

                while(!st.empty() and nums[st.top()] < nums[i%n]){
                    ans[st.top()] = nums[i%n];
                    st.pop();
                }

                st.push(i%n);
            }

            return ans;
        }
}