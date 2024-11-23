#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print2Darray(int a[][3],int m,int n){
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    print2Darray(a,3,3);
}