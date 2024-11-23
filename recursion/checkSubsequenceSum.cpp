//striver

// optimized approach is 0/1 knapsack approach
// https://www.techiedelight.com/subset-sum-problem/


#include<bits/stdc++.h>
using namespace std;

 bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
    // Code here
    
    if(k == 0){
        return true;
    }
    
    if(n < 0 || k < 0){
        return false;
    }
    
    bool include = checkSubsequenceSum(n-1,arr,k-arr[n]);
    bool exclude = checkSubsequenceSum(n-1,arr,k);
    
    return include || exclude;
}

// optimized approach
bool helper(int n,vector<int>&arr,int k , auto &lookup){
    if(k == 0){
        return true;
    }
    
    if(n < 0 || k < 0){
        return false;
    }

    string key = to_string(n) + "|" + to_string(k);

    if(lookup.find(key) == lookup.end()){
        bool include = helper(n-1,arr,k-arr[n],lookup);
        bool exclude = helper(n-1,arr,k,lookup);

        lookup[key] = include || exclude;
    }

    return lookup[key];
}

 bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
    // Code here
    
    unordered_map<string,bool> lookup;
    return helper(n-1,arr,k,lookup);
}
int main(){

}