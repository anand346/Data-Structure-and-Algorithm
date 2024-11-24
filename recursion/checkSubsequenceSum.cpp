//striver

// optimized approach is 0/1 knapsack approach
// https://www.techiedelight.com/subset-sum-problem/


#include<bits/stdc++.h>
using namespace std;

 bool checkSubsequenceSum1(int n, vector<int>& arr, int k) {
    // Code here
    
    if(k == 0){
        return true;
    }
    
    if(n < 0 || k < 0){
        return false;
    }
    
    bool include = checkSubsequenceSum1(n-1,arr,k-arr[n]);
    bool exclude = checkSubsequenceSum1(n-1,arr,k);
    
    return include || exclude;
}

// optimized approach
bool helper(int n,vector<int>&arr,int k , unordered_map<string,bool> &lookup){
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
    vector<int> A = { 7, 3, 2, 5, 8 };
    int k = 22;
 
    // total number of items
    int n = A.size();
 
    if (checkSubsequenceSum(n, A, k)) {
        cout << "Subsequence with the given sum exists";
    }else {
        cout << "Subsequence with the given sum does not exist";
    }
 
    return 0;
}