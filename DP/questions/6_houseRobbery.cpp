#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :
         int solve(vector<int>&nums){
            int n = nums.size();
            int prev2 = 0;
            int prev1 = nums[0];

            for(int i = 1;i < n;i++){
                int incl = prev2 + nums[i];
                int exl = prev1 + 0;
                int ans = max(incl,exl);
                prev2 = prev1;
                prev1 = ans;
            }

            return prev1;
        }

        int valueInHouse(vector<int>&nums){

            int n = nums.size();
            vector<int> first,second;

            for(int i = 0;i < n;i++){
                if(i != n-1){
                    first.push_back(nums[i]);
                }
                if(i != 0){
                    second.push_back(nums[i]);
                }
            }

            int ans = max(solve(first),solve(second));
            return ans;
        }
}

int main(){


}