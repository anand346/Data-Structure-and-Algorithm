// https://youtu.be/sLuKQ9mZFz0

#include<bits/stdc++.h>
using namespace std;


long long numberOfPath(int m,int n){
    if(m == 1 || n == 1) return 1;

    return numberofPath(m-1,n) + numberofPath(m,n-1);
}

long long numberOfPath(int m,int n){
    vector<vector<int>> mat(m,vector<int>(n,1));

    for(int i = 1;i < m;i++){
        for(int j = 1;j < n;j++){
            mat[i][j] = mat[i-1][j]+mat[i][j-1];
        }
    }

    return mat[m-1][n-1];
}


long long numberOfPath(int m,int n){
    vector<int> mat(n,1);
    for(int i = 0;i < m-1;i++){
        for(int j = 1;j < n;j++){
            mat[j] += mat[j-1];
        }
    }

    return mat[n-1];
}

int main(){

}