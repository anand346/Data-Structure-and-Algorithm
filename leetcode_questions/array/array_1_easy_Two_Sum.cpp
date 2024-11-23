#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// vector<int> twoSum(vector<int> &nums,int target){
//     vector<int> result;
//     for(int i = 0;i < nums.size() -1;i++){
//         for(int j =i+1; j < nums.size();j++){
//             if(nums[j]+nums[i] == target){
//                 result.push_back(i);
//                 result.push_back(j);
//                 return result;
//             }
//         }
//     }
//     return result;
// }

vector<int> twoSum(vector<int> &nums,int target){
    vector<int> result;
    unordered_map<int,int> inMap;
    int requiredIndex = 0;
    for(int i = 0;i < nums.size();i++){
        requiredIndex = target-nums[i];
        if(inMap.count(requiredIndex)){
            result.push_back(inMap[requiredIndex]);
            result.push_back(i);
            return result;
        }
        inMap[nums[i]] = i;
    }
    return result;
}

string twoSum1(vector<int> &nums,int target){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int left = 0,right = n-1;

    while(left < right){
        int sum = nums[left] + nums[right];

        if(sum == target){
            return "yes";
        }else if(sum > target){
            right--;
        }else{
            left++;
        }
    }
    return "No";
}

int main(){
    vector<int> input = {2,3,6,7,9,1};
    vector<int> result = twoSum(input,16);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}