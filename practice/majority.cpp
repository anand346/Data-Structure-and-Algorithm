#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int searchMajority(vector<int> &nums){
    int cand = nums[0];
    int n= nums.size();
    int count = 1;
    for(int i = 1;i < n;i++){
        if(nums[i] == cand){
            count++;
        }else{
            count--;
            if(count == 0){
                cand = nums[i];
                count = 1;
            }
        }
    }
    int count2 = 0;
    for(int i = 0;i < n; i++){
        if(nums[i] == cand){
            count2++;
        }
    }
    if(count2 >= n/2){
        return cand;
    }else{
        return -1;
    }
}
int main(){
    vector<int> a = {1,2,2,2};
    cout<<searchMajority(a)<<endl;
}