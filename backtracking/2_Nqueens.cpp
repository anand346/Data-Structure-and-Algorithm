#include<bits/stdc++.h>
using namespace std;


void solve(bool board[][4],int n,int row,bool cols[],bool ndiag[],bool rdiag[],string asf){


    if(row == n){
        cout<<asf+"."<<endl;
        return ;
    }

    for(int col = 0;col < n;col++){
        if(cols[col] == false && ndiag[row+col] == false && rdiag[(row-col)+n-1] == false){
            board[row][col] = true;
            cols[col] = true;
            ndiag[row+col] = true;
            rdiag[(row-col)+n-1] = true;
            solve(board,n,row+1,cols,ndiag,rdiag,asf+char('0'+row)+"-"+char('0'+col)+", ");
            board[row][col] = false;
            cols[col] = false;
            ndiag[row+col] = false;
            rdiag[(row-col)+n-1] = false;
        }
    }
}

int main(){

    int n;
    cin>>n; // input should be 4

    bool board[n][4]    = {false};
    bool cols[n]        = {false};
    bool ndiag[(2*n)-1] = {false};
    bool rdiag[(2*n)-1] = {false}; 

    solve(board,n,0,cols,ndiag,rdiag,"");

}