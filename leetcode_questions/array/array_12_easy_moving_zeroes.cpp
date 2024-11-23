#include<bits/stdc++.h>
using namespace std;
void movingZeroes(vector<int> &nums){
    int pos = 0;
    for(int i= 0;i < nums.size();++i){
        if(nums[i] != 0){
            nums[pos++] = nums[i];
        }
    }
    for(;pos < nums.size();++pos){
        nums[pos] = 0;
    }
}
int main(){
    vector<int> nums = {2,0,1,0,3,0,3};
    movingZeroes(nums);
    for(int i = 0;i < nums.size();i++){
        cout<<nums[i]<<" "; 
    }
}