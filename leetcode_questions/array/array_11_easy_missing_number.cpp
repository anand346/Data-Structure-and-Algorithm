#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i = 0;i < n;i++){
        if(i != nums[i]){
            n = i;
            break;
        }
    }
    return n;
}
int missingNumber1(vector<int> &nums){
    int n = nums.size();
    int total = n*(n+1)/2;
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += nums[i];
    }
    return total-sum;
}
int main(){
    vector<int>  hello = {2,1,0};
    cout<<missingNumber1(hello);
}