// Input:
// n = 5
// arr[] = {1,2,3,4,5}
// Output: 2 1 4 3 5
// Explanation: Array elements after 
// sorting it in wave form are 
// 2 1 4 3 5.



#include<bits/stdc++.h>
using namespace std;

void convertToWave(int n, vector<int>& arr){
    sort(arr.begin(),arr.end());
    for(int i =0;i < n-1;i++){
        swap(arr[i],arr[i+1]);
        i++;
    }
}
int main(){
    int n = 5;
    vector<int> arr = {1,2,3,4,5};
    convertToWave(n,arr);
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }


}