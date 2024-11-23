#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mySearch(vector<int> &nums,int target){
    int s = 0;
    int e = nums.size() - 1;
    while(s <= e){
        int mid = (s+e)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[s] <= nums[mid]){
            if(target >= nums[s] && target <= nums[mid]){
                e = mid -1;
            }else{
                s = mid + 1;
            }
        }else{
            if(target >= nums[mid] && target <= nums[e]){
                s = mid + 1;
            }else{
                e = mid -1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> a = {7,8,9,1,2,3,4,5,6};
    cout<<mySearch(a,4);
}