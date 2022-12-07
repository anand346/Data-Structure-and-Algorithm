// N = 4, K = 6
// arr[] = {1, 5, 7, 1}
// Output: 2
// Explanation: 
// arr[0] + arr[1] = 1 + 5 = 6 
// and arr[1] + arr[3] = 5 + 1 = 6.

#include<bits/stdc++.h>
using namespace std;
int getPairsCount(int arr[], int n, int k) {
    int j = 0;
    int count = 0;
    for(int i = 0;i < n;i++){
        if(i != j){
            if(arr[i] + arr[j] == k){
                count++;
            }
        }
        if(i == (n-1)){
            j++;
            i = j;
            if(j == (n-1)){
                break;
            }
            continue;
        }
    }
    return count;
}
int main(){
    int arr[] = {1, 5, 7, 1};
    cout<<getPairsCount(arr,4,6);
}