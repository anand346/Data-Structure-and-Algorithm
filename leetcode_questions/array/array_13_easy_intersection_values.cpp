#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &nums1,vector<int> &nums2){
    unordered_map<int,int> inMap;
    for(int a : nums1){
        inMap[a]++;
    }
    vector<int> out;
    for(int b : nums2){
        if(inMap[b]-- > 0){
            out.push_back(b);
        }
    }
    return out;
}
int main(){
    vector<int> nums1 = {1,2,2,2,1};
    vector<int> nums2 = {2,2};
    vector<int> nums3 = intersection(nums1,nums2);
    for(int i = 0;i < nums3.size();i++){
        cout<<nums3[i]<<" ";
    }
}