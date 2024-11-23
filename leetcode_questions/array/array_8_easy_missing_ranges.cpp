#include <bits/stdc++.h>
using namespace std;

string getRange(int lower,int upper){
    if(lower == upper){
        return to_string(lower)+"->";
    }else{
        return to_string(lower)+"->"+to_string(upper) ;
    }
}

vector<string> missingRanges(int lower,int upper,vector<int>& nums){
    vector<string> ans;
    if(nums.front() > lower){
        ans.push_back(getRange(lower,nums.front()-1));
    }
    for(int i = 1;i < nums.size();++i){
        if(nums[i] > nums[i-1]+1){
            ans.push_back(getRange(nums[i-1]+1,nums[i]-1));
        }
    }
    if(nums.back() < upper){
        ans.push_back(getRange(nums.back()+1,upper));
    }
    return ans;
}
int main(){
    vector<int> nums = {3,8,20,54};
    vector<string> ans = missingRanges(0,60,nums);
    for(int i = 0;i < ans.size();++i){
        cout<<ans[i]<<" ";
    }
}