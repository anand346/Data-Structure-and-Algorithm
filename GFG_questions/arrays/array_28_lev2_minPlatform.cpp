// Input: n = 6 
// arr[] = {0900, 0940, 0950, 1100, 1500, 1800}
// dep[] = {0910, 1200, 1120, 1130, 1900, 2000}
// Output: 3
// Explanation: 
// Minimum 3 platforms are required to 
// safely arrive and depart all trains.


#include<bits/stdc++.h>
using namespace std;
int findPlatform(int arr[], int dep[], int n){
    int plat_need = 1;int ans = 1;
    int i = 1;int j = 0;
    sort(arr,arr+n);
    sort(dep,dep+n);
    while(i < n && j < n){
        if(arr[i] <= dep[j]){
            plat_need++;
            i++;
        }else if(arr[i] > dep[j]){
            plat_need--;
            j++;
        }

        if(plat_need > ans){
            ans = plat_need;
        }
    }
    return ans;
}
int main(){
    int n = 6;
    int arr[] = {0900, 0940, 0950, 1100, 1500, 1800};
    int dep[] = {0910, 1200, 1120, 1130, 1900, 2000};
    cout<<findPlatform(arr,dep,n);  
}