// N = 5
// a[] = {2,3,1,2,3}
// Output: 2 3 
// Explanation: 2 and 3 occur more than once
// in the given array.

#include<bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n){
    unordered_map<int,int> mp;
    vector<int> result;
    for(int i = 0;i < n;i++){
        if(mp.count(arr[i])){
            if(mp[arr[i]] == 1){
                result.push_back(arr[i]);
                mp[arr[i]]++;
            }
        }else{
            mp[arr[i]]++;
        }
    }
    if(result.empty()){
        return {-1};
    }else{
        return result;
    }
}
int main(){
    int arr[] = {2,3,1,2,3,3,2,2};
    vector<int> result = duplicates(arr,5);
    for(int i = 0;i < result.size();i++){
        cout<<arr[i]<<" ";
    }
}