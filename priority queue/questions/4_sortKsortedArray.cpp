#include<bits/stdc++.h>
using namespace std;



int sortK(vector<int>& nums,int k){

    int size = (nums.size() == k) ? k : k+1;

    priority_queue<int,vector<int>,greater<int>> pq(nums,nums+size);

    int index = 0;

    for(int i = k+1;i < n;i++){
        nums[index++] = pq.top();
        pq.pop();
        pq.push(nums[i]);
    }

    while(!pq.empty()){
        nums[index++] = pq.top();
        pq.pop();
    }


}

int main(){


}