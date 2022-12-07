// Input:
// N = 5
// A[] = {1,2,3,5}
// Output: 4

#include<bits/stdc++.h>
using namespace std;
int MissingNumber(vector<int>& array, int n) {
    int arrSum = 0;
    int totalSum = 0;
    for(int i = 0;i < array.size();i++){
        arrSum += array[i];
    }
    for(int i = 0;i <= n;i++){
        totalSum += i;
    }
    return totalSum - arrSum;
}
int main(){
    vector<int> arr = {1,2,3,5};
    int n = 5;
    cout<<MissingNumber(arr,n);

}