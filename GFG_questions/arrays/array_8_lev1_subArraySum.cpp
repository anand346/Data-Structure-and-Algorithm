// N = 5, S = 12
// A[] = {1,2,3,7,5}
// Output: 2 4
// Explanation: The sum of elements 
// from 2nd position to 4th position 
// is 12.

#include<bits/stdc++.h>
using namespace std;
vector<int> subarraySum(int arr[], int n, long long s){
        // Your code here
        int l = 0,r =0,sum = 0;
        vector<int> ans;
        if(s == 0){
            return {-1};
        }
        while(r <= n){
            
            if(sum < s){
                sum += arr[r++];
            }else if(sum == s){
                ans.push_back(l+1);
                ans.push_back(r);
                return ans;
            }else{
                sum -= arr[l++];
            }
        }
        return {-1};
}
int main(){
    int arr[] = {1,2,3,7,5};
    vector<int> result = subarraySum(arr,5,12);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}