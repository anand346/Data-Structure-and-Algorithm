// striver

// Problem Statement: Given an array of integers that may contain duplicates the task is to return all possible subsets. Return only unique subsets and they can be in any order.

// https://leetcode.com/problems/combination-sum-ii/solutions/1277764/combination-sum-i-ii-and-iii-subsets-i-and-ii-permutations-i-and-ii-one-stop-c-solutions/

#include<bits/stdc++.h>
using namespace std;


class Solution {
private:
    void findSubsets(int ind, vector < int > & nums, vector < int > & ds, vector < vector < int >> & ans) {
        ans.push_back(ds);
        for (int i = ind; i < nums.size(); i++) {
            if (i != ind && nums[i] == nums[i - 1]) continue;
            ds.push_back(nums[i]);
            findSubsets(i + 1, nums, ds, ans);
            ds.pop_back();
        }
    }
public:
    vector < vector < int >> subsetsWithDup(vector < int > & nums) {
        vector < vector < int >> ans;
        vector < int > ds;
        sort(nums.begin(), nums.end());
        findSubsets(0, nums, ds, ans);
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> list = {4,2,1,5};
    vector<vector<int>> ans = s.subsetsWithDup(list);

    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}