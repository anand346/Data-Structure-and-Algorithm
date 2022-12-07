#include<bits/stdc++.h>
using namespace std;
long long int countSubarrWithEqualZeroAndOne(int arr[], int n){
    int sum = 0;
    int result = 0;
    unordered_map<int,int> mp;
    mp[0] = 1;
    for(int i = 0;i < n;i++){
        if(arr[i] == 0){
            sum += -1;
        }else{
            sum += 1;
        }

        if(mp.count(sum)){
            result += mp[sum];
            mp[sum]++;
        }else{
            mp[sum]++;
        }
    }
    return result;
}
int main(){
    int n = 7;
    int a[] = {1,0,0,1,0,1,1};
    cout<<countSubarrWithEqualZeroAndOne(a,n);
}