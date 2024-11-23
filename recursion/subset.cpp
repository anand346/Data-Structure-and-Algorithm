// striver

// Given an integer array nums of unique elements, return all possible
// subsets
// (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

// https://leetcode.com/problems/combination-sum-ii/solutions/1277764/combination-sum-i-ii-and-iii-subsets-i-and-ii-permutations-i-and-ii-one-stop-c-solutions/
// prefer using for loop approach in all kind of subset problems
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