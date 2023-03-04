
// https://youtu.be/Q1fLW_zQr3M

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public :

        int totalSum = 0 ;

        int solve(vector<int> &nums,int sum,int k,int pos){

            if (k == 0) return abs(2 * sum - totalSum);
            if (pos == nums.size()) return INT_MAX;

            int take = solve(nums, sum + nums[pos], k - 1, pos + 1);
            int dontTake = solve(nums, sum, k, pos + 1);

            return min(take, dontTake);
                    
        }

        int tugOfWar(vector<int> &nums){
            int n = nums.size();
            totalSum = accumulate(begin(nums),end(nums),0);
            return solve(nums,0,n/2,0);
        }

};




int main(){


    int n;
    cin>>n;
    vector<int> arr(n) ;
    for(int i = 0;i< n;i++){
        int k = 0;
        cin>>k;
        arr.push_back(k);
    }
    Solution s;
    cout<<s.tugOfWar(arr);
    
}