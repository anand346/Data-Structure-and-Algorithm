#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 3
void mySpiral(int m,int n,int a[R][C]){
    int k = 0,l =0;
    int lastRow = m-1,lastCol = n-1;
    while(k <= lastRow && l <= lastCol){
        for(int i = l;i <= lastCol;i++){
            cout<<a[k][i]<<" ";
        }
        k++;
        for(int i = k;i <= lastRow;i++){
            cout<<a[i][lastCol]<<" ";
        }
        lastCol--;
        if(k <= lastRow){
            for(int i = lastCol;i >= l;i--){
                cout<<a[lastRow][i]<<" ";
            }
            lastRow--;
        }
        if(l <= lastCol){
            for(int i = lastRow;i >= k;i--){
                cout<<a[i][l]<<" ";
            }
            l++;
        }
    }
    
    
}
int main(){
    int a[R][C] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    mySpiral(R,C,a);
}