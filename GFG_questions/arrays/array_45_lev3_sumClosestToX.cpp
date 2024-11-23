// Input:
// N = 6, X = 54
// arr[] = {10, 22, 28, 29, 30, 40}
// Output: 22 30
// Explanation: As 22 + 30 = 52 is closest to 54.


#include<bits/stdc++.h>
using namespace std;
vector<int> sumClosest(vector<int>arr, int x){
    int l = 0;
    int r = arr.size() - 1;
    int min_l = 0;
    int min_r = 0;
    int diff = INT_MAX;
    while(l < r){
        if(abs(arr[l] + arr[r] - x) < diff){
            diff = abs(arr[l] + arr[r] - x);
            min_l = l;
            min_r = r;
        }
        if((arr[l] + arr[r]) < x){
            l++;
        }else{
            r--;
        }
    }

    vector<int> result;
    result.push_back(arr[min_l]);
    result.push_back(arr[min_r]);
    return result;
}
int main(){
    int N = 6, X = 54;
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    vector<int> result;
    result = sumClosest(arr,X);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }

}