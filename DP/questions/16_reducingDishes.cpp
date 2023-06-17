#include<bits/stdc++.h>
using namespace std;

// recursion
int solve(vector<int>& satisfaction,int index,int time){

    if(index == satisfaction.size()){
        return 0;
    }

    int include = satisfaction[index]*(time+1) + solve(satisfaction,index+1,time+1);
    int exclude = 0 + solve(satisfaction,index+1,time);

    return max(include,exclude);
}

// recursion + memoization
// n = satisfaction.size();
// vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
int solve(vector<int>& satisfaction,int index,int time,vector<vector<int>> &dp){

    if(index == satisfaction.size()){
        return 0;
    }

    if(dp[index][time] != -1){
        return dp[index][time];
    }

    int include = satisfaction[index]*(time+1) + solve(satisfaction,index+1,time+1);
    int exclude = 0 + solve(satisfaction,index+1,time);

    return dp[index][time] = max(include,exclude);
}


// tabulation

int maxSatisfaction(vector<int>& satisfaction){

    sort(satisfaction.begin(),satisfaction.end());
    int n = satisfaction.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for(int index = n-1;i >= 0;i--){
        for(int time = index;time >= 0;time--){
            int include = satisfaction[index]*(time+1) + dp[index+1][time+1];
            int exclude = 0 + dp[index+1][time];

            dp[index][time] = max(include,exclude);
        }
    }

    return dp[0][0];
}
// T.C. n2
// S.C. n2


// tabulation + space optimization

int maxSatisfaction(vector<int>& satisfaction){

    sort(satisfaction.begin(),satisfaction.end());
    int n = satisfaction.size();
    
    vector<int> curr(n+1,0);
    vector<int> next(n+1,0);

    for(int index = n-1;i >= 0;i--){
        for(int time = index;time >= 0;time--){
            int include = satisfaction[index]*(time+1) + next[time+1];
            int exclude = 0 + next[time];

            curr[time] = max(include,exclude);
        }

        next = curr;
    }

    return next[0];
}
// SC. O(n)
// TC O(n2)


// space complexity O(1) solution
// class Solution {
// public:
//     int maxSatisfaction(vector<int>& s) {
//         sort(s.begin(), s.end());
//         int sum = 0;
//         int start = s.size()-1;
//         for(int i = s.size()-1; i >= 0; i--){
//             sum += s[i];
//             if(sum < 0){
//                 break;
//             }
//             start--;
//         }
//         start++;
//         int k = 1;
//         sum = 0;
//         for(int i = start; i < s.size(); i++){
//             sum += s[i]*k;
//             k++;
//         }
//         return sum;
//     }
// };


int maxSatisfaction(vector<int>& satisfaction){

    sort(satisfaction.begin(),satisfaction.end());
    return solve(satisfaction,0,0);
}

int main(){

}