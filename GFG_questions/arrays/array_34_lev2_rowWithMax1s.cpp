// Input: 
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2
// Explanation: Row 2 contains 4 1's (0-based
// indexing).

#include<bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int> > arr, int n, int m){
    for(int i = 0;i < n;i++){
        int sum = 0;
        for(int j = 0;j < m;j++){
            sum += arr[i][j];
            if(j == m-1){
                arr[i][j] = sum;
            }
        }
    }
    int ans = 0;
    int rIndex = -1;
    for(int i = 0;i < n;i++){
        if(arr[i][m-1] > ans){
            ans = arr[i][m-1];
            rIndex = i;
        }
    }

    if(ans == 0){
        return -1;
    }else{
        return rIndex;
    }
}
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
    int maxi=0;
    int ans=-1;
    for(int i=0; i<n; i++)
    {
        int cnt1=0;
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==1)
                cnt1++;
        }
        if(maxi<cnt1)
        {
            maxi=cnt1;
            ans=i;
        }
    }
    return ans;
}
int main(){
    int n = 4 , m = 4;
    vector<vector<int>> arr = {{0, 1, 1, 1},
                {0, 0, 1, 1},
                {1, 1, 1, 1},
                {0, 0, 0, 0}};

    cout<<rowWithMax1s(arr,n,m);
}