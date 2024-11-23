#include<bit/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    // code here
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


int main(){

}