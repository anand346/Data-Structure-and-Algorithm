#include<bits/stdc++.h>
using namespace std;
bool containsDuplicates(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i = 0;i < n;++i){
        if(i != 0){
            if(nums[i] != nums[i-1]){
                continue;
            }else{
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int> nums = {1,2,3,4,1};
    cout<<containsDuplicates(nums);
}