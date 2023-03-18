// https://www.youtube.com/watch?v=zxPJltIldWU

#include<bits/stdc++.h>
using namespace std;

class Three{
    public :
        int val,row,col;
}

struct comp{
    bool operator()(three a,three b){
        return a.val > b.val;
    }
}

vector<int> solve(vector<vector<int>> &arr){
    priority_queue<three,vector<three>,comp> pq;
    int n = arr.size();
    int m = arr[0].size();


    for(int i = 0;i < n;i++){
        pq.push({arr[i][0],i,0});
    }

    vector<int> ans;

    while(!pq.empty()){
        three tp = pq.top();
        pq.pop();
        int val = tp.val;
        int row = tp.row;
        int col = tp.col;
        ans.push_back(val);
        if(col+1 < m) pq.push({arr[row][col+1],row,col+1});
    }

    return ans;
}

int main(){
    
}