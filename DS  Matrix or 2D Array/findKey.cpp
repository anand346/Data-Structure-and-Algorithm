#include<bits/stdc++.h>
using namespace std;
vector<int> findKeyIndex(vector<vector<int>> matrix,int m,int n,int key){
    vector<int> result(2,-1);
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            if(matrix[i][j] == key){
                result[0] = i;
                result[1] = j;
                break;
            }
        }
    }
    return result;
}
int main(){
    vector<vector<int>> matrix = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };
    int m = 4;
    int n = 4;
    int key = 33;

    vector<int> keys = findKeyIndex(matrix,m,n,key);
    for(int i = 0;i < keys.size();i++){
        cout<<keys[i]<<" ";
    }
}