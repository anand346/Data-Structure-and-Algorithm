
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<bits/stdc++.h>
#define C 4
using namespace std;
// void findWaitingTime(int process[][C],int m,int n){
//     process[0][2] = 0;
//     int waiting_time = 0;
//     for(int i = 0;i < m; i++){
//         process[i][2] = waiting_time;
//         waiting_time = waiting_time + process[i][1];
//     }
// }
void findWaitingTime(int process[][C],int m,int n){
    process[0][2] = 0;
    int waiting_time = 0;
    for(int i = 1;i < m; i++){
        process[i][2] = process[i-1][1] + process[i-1][2];
    }
}

void findTurnAroundTime(int process[][C],int m,int n){
    for(int i = 0;i < m ; i++){
        process[i][3] = process[i][1] + process[i][2];
    }
}
int findTotalWaitingTime(int process[][C],int m,int n){
    int totalWaitingTime = 0;
    for(int i = 0; i < m; i++){
        totalWaitingTime = totalWaitingTime + process[i][2];
    }
    return totalWaitingTime;
}
void sortBurstTime(int process[][C],int m,int n){
    for(int count = 1;count < n; count++){
        for(int j = 0; j < m-1; j++){
            if(process[j][1] > process[j+1][1]){
                swap(process[j],process[j+1]);
            }
        }
    }
    findWaitingTime(process,m,n);
    findTurnAroundTime(process,m,n);
}
int main()
{
    int n;
    cout<<"Enter no. of process : ";
    cin>>n;
    int process[n][C];
    for(int i = 0;i < n; i++){
        cout<<"Enter "<<i+1<<"th process name : ";
        cin>>process[i][0];
        cout<<"Enter "<<i+1<<"th process burst time : ";
        cin>>process[i][1];
    }
    cout<<endl;
    cout<<"PID\tBT\tWT\tTAT"<<endl;
    sortBurstTime(process,n,C);
    for(int i = 0;i < n; i++){
        for(int j = 0;j < 4 ;j++){
            cout<<process[i][j]<<"\t";    
        }
        cout<<endl;
    }
    int totalWaitingTime = findTotalWaitingTime(process,n,C);
    cout<<"Total waiting time : "<<totalWaitingTime;
    cout<<endl;
    cout<<"Average wating time : "<<totalWaitingTime/n;
    
}
//4 1 3 2 6 3 4 4 2
