//by yogesh and sailesh yt channel


#include<bits/stdc++.h>
using namespace std;

class Solution{

    public :
        stack<pair<int,int>> st;
        void getNextSmaller(vector<int> nums){
            int n = nums.size();
            st.push({nums[0],0});
            vector<int> ans(n);

            for(int i = 1;i < n;i++){
                while(!st.empty() and st.top().first > nums[i]){
                    ans[st.top().second] = nums[i];
                    st.pop();
                }
                st.push({nums[i],i});
            }

            while(!st.empty()){
                ans[st.top().second] = -1;
                st.pop();
            }

            for(int i = 0;i < n;i++){
                cout<<ans[i]<<" ";
            }
        }
};

int main(){

}