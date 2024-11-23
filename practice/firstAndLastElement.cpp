#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public : 
        int getFirst(vector<int>& nums,int target){
            int s = 0;
            int e = nums.size() - 1;
            int ans = -1;
            while(s <= e){
                int mid = (s+e)/2;
                if(nums[mid] == target){
                    ans = mid;
                    e = mid -1;
                }else if(nums[mid] < target){
                    s = mid + 1;
                }else{
                    e = mid - 1;
                }
            }
            return ans;
        }
        int getLast(vector<int>& nums,int target){
            int s = 0;
            int e = nums.size() - 1;
            int ans = -1;
            while(s <= e){
                int mid = (s+e)/2;
                if(nums[mid] == target){
                    ans = mid;
                    s = mid +1;
                }else if(nums[mid] < target){
                    s = mid + 1;
                }else{
                    e = mid - 1;
                }
            }
            return ans;
        }
        vector<int> SearchRange(vector<int>& nums,int target){
            vector<int> ans(2,-1);
            int first = getFirst(nums,target);
            if(first == -1){
                return ans;
            }
            int last = getLast(nums,target);
            ans[0] = first;
            ans[1] = last;
            return ans;
        }
};
int main(){
    vector<int> nums = {1,2,2,2,2,3,3,3,4}; //sorted array
    Solution a;
    vector<int> b = a.SearchRange(nums,3);
    for(int i = 0; i < b.size();i++){
        cout<<b[i]<<" ";
    }
}