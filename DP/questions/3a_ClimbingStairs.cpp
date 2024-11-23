#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int prev1 = 1;
        int prev2 = 1;
        for(int i = 2;i <= n;i++){
            const int dp = prev1 + prev2;
            prev2 = prev1;
            prev1 = dp;
        }
        return prev1;
    }
};


// Time: O(n)
// Space: O(1)

int main(){
    Solution s;
    cout<<s.climbStairs(10);
}