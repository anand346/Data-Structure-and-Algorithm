//sort the given array in O(N*longN)
// N = 4
// arr[] = {1, 5, 3, 2}
#include<bits/stdc++.h>
using namespace std;
vector<int> sortArray(vector<int> arr){
    if(arr.size() == 0){
        return {-1};
    }
    sort(arr.begin(),arr.end());
    return arr;
}
int main(){
    vector<int> arr = {1,5,3,2};
    vector<int> result = sortArray(arr);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}