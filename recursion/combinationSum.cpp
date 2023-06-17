//striver

// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the
// frequency
// of at least one of the chosen numbers is different.

#include<bits/stdc++.h>
using namespace std;



void findCombination(int idx,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
    if(idx == arr.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }
 
    if(arr[idx] <= target){
        ds.push_back(arr[idx]); 
        findCombination(idx,target-arr[idx],arr,ans,ds);
        ds.pop_back();
    }   
    findCombination(idx+1,target,arr,ans,ds);
}

vector<vector<int>> combinationSum(vector<int>& candidates,int target){
    vector<vector<int>> ans;
    vector<int> ds;

    findCombination(0,target,candidates,ans,ds);
    return ans;
}

int main(){
    vector<int> list = {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans = combinationSum(list,target);

    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}



// https://leetcode.com/problems/combination-sum-ii/solutions/1277764/combination-sum-i-ii-and-iii-subsets-i-and-ii-permutations-i-and-ii-one-stop-c-solutions/

class Solution {
public:
    vector<vector<int>> result;
    
    void comSum(vector<int> &curr, int curInd, int sum, vector<int> &candidates, int target, int n){
        if(sum == target){
            result.push_back(curr);
            return;
        }      
        else if(sum > target){
            return;
        }
        
        for(int i = curInd; i < n; i++){
            curr.push_back(candidates[i]);
            sum += candidates[i];
            comSum(curr, i, sum, candidates, target, n);
            sum -= candidates[i];
            curr.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        int sum = 0;
        int n = candidates.size();
        comSum(curr, 0, sum, candidates, target, n);
        return result;
    }
};