#include<iostream>
#define R 4
#define C 4
#include<bits/stdc++.h>
using namespace std;
void printZ(int a[][C],int m,int n){
    int last_row=m-1,last_col=n-1;
    for(int i = 0;i <= last_col; i++){
        cout<<a[0][i]<<" ";
    }
    int i = 1, j = n-2;
    while(j >= 0 && i < m){
        cout<<a[i][j]<<" ";
        j--;
        i++;
    }
    for(int i = 1;i <= last_col;i++){
        cout<<a[last_row][i]<<" ";
    }
}
int main(){
    int a[R][C] = {
        {1,2,3,4},
        {4,5,6,5},
        {7,8,9,0},
        {4,3,6,2}
    };
    printZ(a,R,C);
}