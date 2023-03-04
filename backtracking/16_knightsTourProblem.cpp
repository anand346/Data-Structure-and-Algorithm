// https://www.youtube.com/watch?v=kVF-KYCcpLs 

#include<bits/stdc++.h>
using namespace std;


void displayBoard(vector<vector<int>> chess){

    for(int i = 0;i < chess.size();i++){
        for(int j = 0;j < chess[0].size();j++){
            cout<<chess[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printKnightsTour(vector<vector<int>> chess,int r,int c,int move){

    if(r < 0 || c < 0 || r >= chess.size() || c >= chess[0].size() || chess[r][c] > 0){
        return ;
    }else if(move == chess.size()*chess.size()){
        chess[r][c] = move;
        displayBoard(chess);
        chess[r][c] = 0;
        return ;
    }


    chess[r][c] = move;
    printKnightsTour(chess,r-2,c+1,move+1);
    printKnightsTour(chess,r-1,c+2,move+1);
    printKnightsTour(chess,r+1,c+2,move+1);
    printKnightsTour(chess,r+2,c+1,move+1);
    printKnightsTour(chess,r+2,c-1,move+1);
    printKnightsTour(chess,r+1,c-2,move+1);
    printKnightsTour(chess,r-1,c-2,move+1);
    printKnightsTour(chess,r-2,c-1,move+1);
    chess[r][c] = 0;

}

int main(){

    int n , r, c ;
    cin>>n>>r>>c;

    vector<vector<int>> chess(n , vector<int>(n,0));

    printKnightsTour(chess,r,c,1);


}