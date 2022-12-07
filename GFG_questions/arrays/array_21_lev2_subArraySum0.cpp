// Input:
// 5
// 4 2 -3 1 6

// Output: 
// Yes

// Explanation: 
// 2, -3, 1 is the subarray 
// with sum 0.

#include<bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n){
    set<int> s;
    int pre_sum = 0;
    bool ans = false;
    for(int i = 0;i < n;i++){
        pre_sum += arr[i];

        if(pre_sum == 0){
            ans = true;
            break;
        }
        if(s.find(pre_sum) != s.end()){
            ans = true;
            break;
        }else{
            s.insert(pre_sum);
        }
    }
    return ans;
}

int main(){
    int arr[] = {4,2,0,1,6};
    cout<<subArrayExists(arr,5);
}