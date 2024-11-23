#include<bits/stdc++.h>
using namespace std;


// recursive

int solve(vector<int>& weight,vector<int> &value,int index,int maxWeight){
    if(index == 0){
        if(weight[0] <= maxWeight){
            return value[0];
        }
    }

    if(weight[index] <= maxWeight){
        int include = value[index] + solve(weight,value,index-1,maxWeight-weight[index]);
    }
    int exclude = 0 + solve(weight,value,index-1,maxWeight);
    int ans = max(include,exclude);
    return ans;
}

// recursive + memoization

int solve(vector<int>& weight,vector<int> &value,int index,int maxWeight){
    if(index == 0){
        if(weight[0] <= maxWeight){
            return value[0];
        }
    }
    if(dp[index][maxWeight] != -1){
        return dp[index][maxWeight];
    }

    if(weight[index] <= maxWeight){
        int include = value[index] + solve(weight,value,index-1,maxWeight-weight[index]);
    }
    int exclude = 0 + solve(weight,value,index-1,maxWeight);

    dp[index][maxWeight] = max(include,exclude);
    return dp[index][maxWeight];
}

int knapsack(vector<int>& weight,vector<int> &value,int n,int maxWeight){

    vector<vector<int>> dp(n,vector<int>(maxWeight+1,-1));
    return solve(weight,value,n-1,maxWeight);
}


// solveTAb

int solveTAb(vector<int> &weight,vector<int> &value,int n,int maxWeight){


    vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));


    for(int w = weight[0];w <= maxWeight;w++){
        if(weight[0] <= maxWeight){
            dp[0][w] = value[0];
        }else{
            dp[0][w] = 0;
        }
    }

    for(int index = 1;index < n;index++){
        for(int w = 0; w <= maxWeight;w++){
            int include = 0;

            if(weight[index] <= w){
                include = value[index] + dp[index-1][w-weight[index]];
            }
            int exclude = 0 + dp[index-1][w];

            dp[index][w] = max(include,exclude);
        }
    }

    return dp[n-1][maxWeight];
}


// solveTab + optimization

int solveTAb(vector<int> &weight,vector<int> &value,int n,int maxWeight){


   vector<int> prev(maxWeight+1,0);
   vector<int> curr(maxWeight+1,0);


    for(int w = weight[0];w <= maxWeight;w++){
        if(weight[0] <= maxWeight){
            prev[w] = value[0];
        }else{
            prev[w] = 0;
        }
    }

    for(int index = 1;index < n;index++){
        for(int w = 0; w <= maxWeight;w++){
            int include = 0;

            if(weight[index] <= w){
                include = value[index] + prev[w-weight[index]];
            }
            int exclude = 0 + prev[w];

            curr[w] = max(include,exclude);
        }
        prev = curr;
    }

    return prev[maxWeight];
}

// memoization
int knapsack(int value[], int weight[], int index, int maxWeight, auto &lookup)
{
    if (maxWeight < 0) {
        return INT_MIN;
    }

    if (index < 0 || maxWeight == 0) {
        return 0;
    }

    string key = to_string(index) + "|" + to_string(maxWeight);
 
    if (lookup.find(key) == lookup.end())
    {
        int include = value[index] + knapsack(value, weight, index - 1, maxWeight - weight[index], lookup);

        int exclude = knapsack(value, weight, index - 1, maxWeight, lookup);
 
        lookup[key] = max(include, exclude);
    }

    return lookup[key];
}
 



int main(){


}