#include<bits/stdc++.h>
using namespace std;


int findFloor(vector<int> &arr,int x){
    int n = arr.size();
    int low = 0,high = n-1;
    int ans = -1;

    while(mid <= high){

        int mid = (low+high)/2;

        if(arr[mid] <= x){
            ans = arr[mid];
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    return ans;
}

int  findCeil(vector<int>& arr,int x){

    int n = arr.size();
    int low = 0,high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] >= x){
            ans = arr[mid];
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){

}