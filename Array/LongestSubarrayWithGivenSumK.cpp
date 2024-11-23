

#include<bits/stdc++.h>
using namespace std;

// applicable to array with positive elements only


//{1,2,3,4,5,6,7,8} k=9
int longestArrayWithGivenSumK(vector<int> &arr,long long k){
    int n = arr.size();

    int left = 0,right = 0;
    int sum = arr[0];
    int maxLength = 0;
    while(right < n){

        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }

        if(sum == k){
            maxLength = max(maxLength,right-left+1);
        }

        right++;
        if(right < n) sum += arr[right];
    }
    return maxLength;
}

// applicable to array with positive and negative elements 
// 
int longestArrayWithGivenSumK2(vector<int> &arr,long long k){

    // k = 1
    // {-1, 1, 1}
    int n = arr.size();
    int maxLen = 0;
    int sum = 0;
    map<int,int> mp;

    // 4
    for(int i = 0;i < n;i++){
        sum += arr[i];

        if(sum == k){
            maxLen = max(maxLen,i+1);
        }

        int rem = sum-k;

        if(mp.find(rem) != mp.end()){
            int len = i - mp[rem];
            maxLen = max(maxLen,len);
        }

        if(mp.find(rem) == mp.end()){
            mp[rem] = i;
        }
    }
    return maxLen;
}


int main(){
    vector<int> a = { -1, 1, 1,1};
    int k = 3;
    int len = longestArrayWithGivenSumK2(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}