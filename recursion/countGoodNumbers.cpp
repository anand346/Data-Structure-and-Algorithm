//striver
// fraz video
// https://leetcode.com/problems/count-good-numbers/
// https://leetcode.com/problems/count-good-numbers/solutions/1314322/c-5-even-indices-4-odd-indices-with-explanation/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long MOD=1e9+7;
    long long pow(long long x,long long n){
        if(n==0)
            return 1;
        long long ans=pow(x,n/2);
        ans*=ans;
        ans%=MOD;
        if(n%2)
        ans*=x;
        ans%=MOD;
        return ans;
    }
    long long countGoodNumbers(long long n) {
        long long odd=n/2; // giving me no. of odd places in n
        long long even=n/2 + n%2; // giving me no. of even place in n
        return (pow(5,even)*pow(4,odd))%MOD;
    }
};

// time complexity : O(logN)
// space complexity : O(logN)

int main(){
    Solution s;
    cout<<s.countGoodNumbers(2381);
}