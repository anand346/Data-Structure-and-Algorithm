// Input:
// n = 7
// arr[] = {1, 5, 3, 4, 3, 5, 6}
// Output: 2
// Explanation: 
// 5 is appearing twice and 
// its first appearence is at index 2 
// which is less than 3 whose first 
// occuring index is 3.


#include<bits/stdc++.h>
using namespace std;
int firstRepeated(int arr[], int n) {
    set<int> result;
    int min = n-1;
    for(int i = n-1;i >= 0;i--){
        if(result.find(arr[i]) != result.end()){
            min = i;
        }else{
            result.insert(arr[i]);
        }
    }
    return min;
}
int main(){
    int a[]= {1, 5, 3, 4, 3, 5, 6};
    cout<<firstRepeated(a,7);
}