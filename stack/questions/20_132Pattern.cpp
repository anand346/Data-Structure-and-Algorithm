// https://www.youtube.com/watch?v=VvqomJmyz1A

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> minarr(n);
        minarr[0] = nums[0];
        for(int i = 1;i < n;i++){
            minarr[i] = min((minarr[i-1]),nums[i]);  
        }

        stack<int> st;
        for(int j = n-1;j >= 0;j--){
            
            while(!st.empty() and st.top() <= minarr[j]) st.pop();
            if(!st.empty() and st.top() < nums[j]){
                return true;
            }
            st.push(nums[j]);
        }
        return false;
    }
};