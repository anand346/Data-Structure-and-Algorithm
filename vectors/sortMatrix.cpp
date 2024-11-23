#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> mat) {
        vector<int> ans;
        for(auto i: mat) {
            for(auto j: i) ans.push_back(j);
        }
        sort(ans.begin(), ans.end());
        int k=0;
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                mat[i][j] = ans[k++];
            }
        }
        return mat;
    }
};

int main(){

}