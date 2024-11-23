// r = 4, c = 4
// matrix[][] = {{1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12},
//            {13, 14, 15,16}}


#include<bits/stdc++.h>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c){
    int k = 0,l = 0,last_row=r-1,last_col=c-1;
    vector<int> result;
    while(k <= last_row && l <= last_col){
        for(int i = l;i <= last_col;i++){
            result.push_back(matrix[k][i]);
        }
        k++;

        for(int i = k;i <= last_row;i++){
            result.push_back(matrix[i][last_col]);
        }   
        last_col--;

        if(k <= last_row){
            for(int i=last_col;i >= l;i--){
                result.push_back(matrix[last_row][i]);
            }
            last_row--;
        }

        if(l <= last_col){
            for(int i=last_row;i >=k;i--){
                result.push_back(matrix[i][l]);
            }
            l++;
        }
    }
    return result;
}
int main(){
   int r = 4, c = 4;
    vector<vector<int>> matrix = {{1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15,16}};
    vector<int> result = spirallyTraverse(matrix,r,c);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}