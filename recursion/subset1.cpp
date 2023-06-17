// striver

// Given an array print all the sum of the subset generated from it, in the increasing order.


#include<bits/stdc++.h>
using namespace std;


void helper(int idx,vector<int> &arr,int  n,vector<int> &ans,int sum){

    if(idx == n){
        ans.push_back(sum);
        return ;
    }

    helper(idx+1,arr,n,ans,sum+arr[idx]);
    helper(idx+1,arr,n,ans,sum);
    
}

void helper2(int idx,vector<int> &arr,int  n,vector<int> &ans,int sum){

    ans.push_back(sum);

    for(int i = idx;i < n;i++){
        sum += arr[i];
        helper2(i+1,arr,n,ans,sum);
        sum -= arr[i];
    }
}

vector<int> subsetSum(vector<int> arr,int n){
    vector<int> ans;
    helper2(0,arr,n,ans,0);
    sort(ans.begin(),ans.end());
    return ans;
}


int main(){
    vector<int> list = {4,3,2,1};
    vector<int> ans = subsetSum(list,4);
    for(int i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }

}