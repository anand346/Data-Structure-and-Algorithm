#include<bits/stdc++.h>
using namespace std;


class Solution1{

    public :
        vector<vector<int>> ans;

        void sub(vector<int> &nums,int i,vector<int> temp){
            if(i == nums.size()){
                ans.push_back(temp);
                return ;
            }

            sub(nums,i+1,temp);
            temp.push_back(nums[i]);
            sub(nums,i+1,temp);
        }

        vector<vector<int>> subsets(vector<int> &nums){
            vector<int> temp;

            sub(nums,0,temp);
            return ans;
        }
};

class Solution {
public:
    
    void helper(vector<int> &nums,int i,vector<int> &sub,vector<vector<int>> &ans){
        
        ans.push_back(sub);
        for(int j = i;j < nums.size();j++){
            sub.push_back(nums[j]);
            helper(nums,j+1,sub,ans);
            sub.pop_back();
        }
        
    }
    void helper2(int i ,vector<int>&nums,vector<int>&temp,vector<vector<int>> &ans){
        if(i == nums.size()){
            ans.push_back(temp);
        }else{
            temp.push_back(nums[i]);
            helper2(i+1,nums,temp,ans);
            temp.pop_back();
            helper2(i+1,nums,temp,ans);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> subs;
        vector<int> sub;
        helper(nums, 0, sub, subs);
        // helper2(0,nums,sub,subs);
        return subs;
    }
};

int main(){
    vector<int> nums = {4,3,2};
    Solution s;
    vector<vector<int>> ans = s.subsets(nums);

    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}