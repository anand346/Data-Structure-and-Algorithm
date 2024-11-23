//containers with max water

#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &heights){
    int ans = 0;
    int left = 0;
    int right = heights.size();
    while(left < right){
        ans = max(min(heights[left],heights[right])*(right-left),ans);
        if(heights[left] < heights[right]){
            left++;
        }else{
            right--;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(nums);
}