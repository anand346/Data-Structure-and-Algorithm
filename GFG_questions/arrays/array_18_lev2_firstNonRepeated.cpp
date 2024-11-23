// Input : arr[] = {-1, 2, -1, 3, 2}
// Output : 3
// Explanation:
// -1 and 2 are repeating whereas 3 is 
// the only number occuring once.
// Hence, the output is 3. 

#include<bits/stdc++.h>
using namespace std;
int firstNonRepeating(int arr[], int n){
    int ans = 0;
    unordered_map<int,int> mp;
    for(int i = 0;i < n;i++){
        mp[arr[i]]++;
    }
    for(int i = 0;i < n;i++){
        auto it = mp.find(arr[i]);
        if(it->second == 1){
            ans = arr[i];
            break;
        }
    }
    return ans;
}
int main(){
    int arr[] = {-1, 2, -1, 3, 2};
    cout<<firstNonRepeating(arr,5);
}