//striver

// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

// Each number in candidates may only be used once in the combination.


#include<bits/stdc++.h>
using namespace std;


void findCombination(int idx,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
    if(target == 0){
        ans.push_back(ds);
        return;
    }

    for(int i = idx;i < arr.size();i++){
        if(i > idx && arr[i] == arr[i-1]) return ;
        if(arr[i] > target) break;
        ds.push_back(arr[i]);
        findCombination(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back();
    } 
}

void findCombination2(int idx,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
    if(target == 0){
        ans.push_back(ds);
        return;
    }
    if(idx >= arr.size()){
        return ;
    }

    if(arr[idx] <= target){
        if(idx > 0 && arr[idx] == arr[idx-1]) return ;
        ds.push_back(arr[idx]);
        findCombination2(idx+1,target-arr[idx],arr,ans,ds);
        ds.pop_back();
    }
    findCombination2(idx+1,target,arr,ans,ds);
}


vector<vector<int>> combinationSum2(vector<int>& candidates,int target){
    sort(candidates.begin(),candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;

    findCombination2(0,target,candidates,ans,ds);
    return ans;
}

// int main(){
//     vector<int> list = {10,1,2,7,6,1,5};
//     int target = 8;
//     vector<vector<int>> ans = combinationSum2(list,target);

//     for(int i = 0;i < ans.size();i++){
//         for(int j = 0;j < ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// https://leetcode.com/problems/combination-sum-ii/solutions/1277764/combination-sum-i-ii-and-iii-subsets-i-and-ii-permutations-i-and-ii-one-stop-c-solutions/

class Solution {
public:
    vector<vector<int>> result;
    
    void comsum(vector<int> &curr, int target, int sum, vector<int> &candidates, int curInd, int n){
        if(target == sum){
            result.push_back(curr);
            return;
        }
        else if(sum>target){
            return;
        }
        
        for(int i = curInd; i < n; i++){
            if(i != curInd && candidates[i]==candidates[i-1])               //to avoid picking up the same combnations i.e. we don't pick same element for certain kth position of a combination 
                continue;
            sum += candidates[i];
            curr.push_back(candidates[i]);
            comsum(curr, target, sum, candidates, i+1, n);
            sum -= candidates[i];
            curr.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> curr;
        int n = candidates.size();
        sort(candidates.begin(), candidates.end());
        comsum(curr, target, 0, candidates, 0, n);
        return result;
    }
};

int main(){
    Solution s;
    vector<int> list = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> ans = s.combinationSum2(list,target);

    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}