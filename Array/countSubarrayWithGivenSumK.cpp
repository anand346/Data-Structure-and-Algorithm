#include<bits/stdc++.h>
using namespace std;


int CountSubarrayWithGivenSumK(vector<int> &arr,int k){

    int cnt = 0;
    map<int,int> mp;
    int preSum = 0;
    int mp[0] = 1;
    int n = arr.size();

    for(int i = 0;i < n;i++){
        preSum += arr[i];

        int remove = preSum-k;

        cnt += mp[remove];

        mp[preSum] += 1;
    }
    return cnt;
}

int main(){


}