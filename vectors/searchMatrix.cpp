#include<bits/stdc++.h>
using namespace std;


bool searchMatrix(vector<int> &arr,int x){

    int m = arr.size();
    int n = arr[0].size();
    int left = 0,high = m*n-1;

    while(left <= high){
        int mid = left+(right-left)/2;
        int mid_val = arr[mid/n][mid%n];

        if(mid_val == x){
            return true;
        }else if(mid_val < x){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return false;
}

int main(){

}