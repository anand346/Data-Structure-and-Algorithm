#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix){
    int n = matrix.size();

    reverse(matrix.begin(),matrix.end());

    for(int i = 0;i < matrix.size();i++){
        for(int j= 0;j < i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}

int main(){

}