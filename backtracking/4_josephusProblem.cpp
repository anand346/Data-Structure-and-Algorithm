// https://youtu.be/dzYq5VEMZIg?list=PL-Jc9J83PIiHO9SQ6lxGuDsZNt2mkHEn0

#include<bits/stdc++.h>
using namespace std;



class Solution {
public:

    int solve(int n,int k){
        if(n == 1){
            return 0;
        }

        int x = solve(n-1,k);
        int y = (x+k)%n;
        return y;
    }
    
    int findTheWinner(int n, int k) {
        int ans = solve(n,k);
        return ans+1;
    }
};

int main(){
    Solution s;
    cout<<s.findTheWinner(8,3);
}