#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 3
void spiralPrint(int m , int n, int matrix[][3]){
    int k = 0, l = 0;
    int last_row = m - 1, last_col = n -1;
    while(k <= last_row && l <= last_col){
        for(int i = l; i <= last_col; i++){
            cout<<matrix[k][i];
        }
        k++;
        for(int i = k ; i <= last_row; i++){
            cout<<matrix[i][last_col];
        }
        last_col--;
        if(k <= last_row){
            for(int i = last_col; i >= l; i--){
                cout<<matrix[last_row][i];
            }
            last_row--;
        }
        if(l <= last_col){
            for(int i = last_row; i >= k ; i--){
                cout<<matrix[i][l];
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
    spiralPrint(R,C,a);
}