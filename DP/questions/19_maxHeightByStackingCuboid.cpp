#include<bits/stdc++.h>
using namespace std;



bool check(vector<int> &base,vector<int> &new){

    if(base[0] >= new[0] && base[1] >= new[1] && base[2] >= new[2]){
        return true;
    }else{
        return false;
    }
}

int longestSubsequence(int n,vector<vector<int>> &a){
    
    vector<int> currRow(n+1,0);
    vector<int> nextRow(n+1,0);

    for(int curr = n-1;curr >= 0;curr--){
        for(int prev = curr-1;prev >= -1;prev--){

            if(prev == -1 || check(a[curr] ,a[prev])){
                take = 1+nextRow[curr+1];
            }
            int notTake = nextRow[prev+1];
            currRow[prev+1] = max(take,notTake);
        }

        nextRow = currRow;
    }

    return nextRow[0];
}

int maxHeight(vector<vector<int>> &cuboids){
    for(auto &a : cuboids){
        sort(a.begin(),a.end());
    }

    sort(cuboids.begin(),cuboids.end());

    return solveTab(cuboids.size(),cuboids);
}

int main(){

}