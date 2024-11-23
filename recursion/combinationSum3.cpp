// Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

//     Only numbers 1 through 9 are used.
//     Each number is used at most once.


#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :
        vector<vector<int>> combinationSum3(int k,int n){
            vector<vector<int>> ans;
            dfs(k,n,1,{},ans);
            return ans;
        }

    private :
        void dfs(int k,int n,int s,vector<int> &&path,vector<vector<int>> &ans){
            if(k == 0 && n == 0){
                ans.push_back(path);
                return ;
            }

            if(k == 0 || n <= 0){
                return ;
            }

            for(int i = s;i <= 9;i++){
                if(i > n) break;
                path.push_back(i);
                dfs(k-1,n-i,i+1,move(path),ans);
                path.pop_back();
            }
        }
};

int main(){
    Solution s;

    vector<vector<int>> ans = s.combinationSum3(3,7);
    
    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}


class Solution {
public:
    vector<vector<int>> ans;
    void f(int i,vector<int> &nums,vector<int> &ds,int tar,int k)
    {
        if(i>=nums.size())
        {
            if(ds.size()==k and tar==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(nums[i]<=tar)
        {
            ds.push_back(nums[i]);
            f(i+1,nums,ds,tar-nums[i],k);
            ds.pop_back();
        }
        f(i+1,nums,ds,tar,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        vector<int> ds;
       for(int i=1;i<=9;i++)
       {
           nums.push_back(i);
       }
        f(0,nums,ds,n,k);
        return ans;
    }
};

// https://leetcode.com/problems/combination-sum-ii/solutions/1277764/combination-sum-i-ii-and-iii-subsets-i-and-ii-permutations-i-and-ii-one-stop-c-solutions/


class Solution {
public:
    vector<vector<int>> result;
    void comsum(vector<int> &curr, int k, int n, int sum, int size, int index){
        if(size==k && sum == n){
            result.push_back(curr);
            return;
        }
        else if(size>k || sum>n)
            return;
        
        for(int i = index; i <= 9; i++){
            sum += i;
            curr.push_back(i);
            comsum(curr, k, n, sum, size+1, i+1);
            sum -= i;
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        comsum(curr, k, n, 0, 0, 1);
        return result;
    }
};