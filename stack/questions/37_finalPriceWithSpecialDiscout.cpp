// https://www.youtube.com/watch?v=3_BAIugNaLw
// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;

        vector<int> ans = prices;

        for(int i = 0;i < prices.size();i++){

            while(!st.empty() and prices[st.top()] >= prices[i]){

                ans[st.top()] = prices[st.top()]-prices[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};