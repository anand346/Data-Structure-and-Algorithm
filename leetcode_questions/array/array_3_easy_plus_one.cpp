#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &nums){
    int size = nums.size();
    if(!size) return nums;
    for(int i = size-1;i >= 0;--i){
        if(nums[i]+1 > 9){
            nums[i] = nums[i]+1 - 10;
            if(i == 0) nums.insert(nums.begin(),1);
        }else{
            nums[i] = nums[i] + 1;
            break;
        }
    }
    return nums;

}
int main(){
    vector<int> nums = {9,9,9,9,9,9,9,9,9};
    plusOne(nums);
    for(int i = 0;i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
}