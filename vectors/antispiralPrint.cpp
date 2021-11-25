
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<bits/stdc++.h>
#define R 3
#define C 4
using namespace std;
void printSpiral(int a[][4],int m,int n){
    int k = 0,l = 0;
    int last_row = m-1,last_col = n-1;
    stack<int> stk;
    while(k <= last_row && l<= last_col){
        for(int i = l ; i <= last_col ; i++){
            stk.push(a[k][i]);
        }
        k++;
        for(int i = k; i <= last_row;i++){
            stk.push(a[i][last_col]);
        }
        last_col--;
        if(k <= last_row){
            for(int i = last_col ;i >= l ; i--){
                stk.push(a[last_row][i]);
            }
            last_row--;
        }
        if(l <= last_col){
            for(int i = last_row ; i >= k; i--){
                stk.push(a[i][l]);
            }
            l++;
        }
    }
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
}
int main()
{
 int a[R][C] = {
     {1,2,3},
     {4,5,6,6},
     {7,8,9}
 };
 printSpiral(a,R,C);
 
 getchar();
}
