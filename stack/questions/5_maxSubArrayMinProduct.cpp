//https://youtu.be/c0yTVTI3qlk // for stack based solution
//https://leetcode.com/problems/maximum-subarray-min-product/solutions/2664455/c-easy-to-understand-short/   //for stack based solution (diff approach)

#include<bits/stdc++.h>
using namespace std;

class Solution{

    public : 
        void maxSumMinProduct(vector<int>& nums) {
            int n = nums.size();

            int left[n];
            for(int i = 0;i < n;i++){
                int prev = i-1;
                while(prev >= 0 and nums[prev] >= nums[i]){
                    prev = left[prev];
                }
                left[i] = prev;
            }

            int right[n];
            for(int i = n-1;i >= 0;i--){
                int next = i+1;
                while(next < n and nums[next] >= nums[i]){
                    next = right[next];
                }
                right[i] = next;
            }

            long sums[n+1];
            sums[0] = 0;
            for(int i = 0;i < n;i++){
                sums[i+1] = sums[i] + nums[i];
            }

            long int ans = 0;
            for(int i = 0;i < n;i++){
                int l = left[i];
                int r = right[i];
                long int sum = sums[r] - sums[l+1];
                ans = max(ans,sum*nums[i]);
            }

            return (ans%1000000007);
        }
};




int main(){

    vector<int> que = {2,3,3,1,2};
    maxSumMinProduct(que);
}
// C++ program to implement
// the above approach

// This code is contributed by grand_master
