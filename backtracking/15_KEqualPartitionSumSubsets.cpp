// https://www.youtube.com/watch?v=h_6MldQ8vB8

#include<bits/stdc++.h>
using namespace std;


bool help(int i ,int bucketNum , int bucketSum , int reqSum, int k,vector<int> &nums,vector<int> &alreadyPicked){

    if(bucketNum == k+1) return true;

    if(bucketSum == reqSum){
        return help(0,bucketNum+1,0,reqSum,k,nums,alreadyPicked);
    }

    if(bucketSum > reqSum) return false;

    if(i >= nums.size()) return false;

    if(alreadyPicked[i] == 1){
        return help(i+1,bucketNum,bucketSum,reqSum,k,nums,alreadyPicked);
    }else{
        bucketSum += nums[i];
        alreadyPicked[i] = 1;
        bool op1 = help(i+1,bucketNum,bucketSum,reqSum,k,nums,alreadyPicked);

        //skip

        bucketSum -= nums[i];
        alreadyPicked[i] = 0;
        bool op2 = help(i+1,bucketNum,bucketSum,reqSum,k,nums,alreadyPicked);

        return op1 | op2;

    }
}

bool canPartitionKSubsets(vector<int> &nums,int n,int k){
    vector<int> alreadyPicked(n,0);
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += nums[i];
    }

    if(sum%k != 0) return false;
    int reqSum = sum/k;
    return help(0,1,0,reqSum,k,nums,alreadyPicked);
}

int main(){

}