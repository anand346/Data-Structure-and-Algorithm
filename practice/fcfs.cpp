
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of processes : ";
    cin>>n;
    int pname[n],btime[n],wtime[n];
    wtime[0] = 0;
    cout<<"Enter all processes : ";
    for(int i = 0;i < n;i++){
        cin>>pname[i];
    }
    cout<<"Enter burst time of all processes : ";
    for(int i = 0;i < n; i++){
        cin>>btime[i];
    }
    for(int i = 1;i < n;i++){
        wtime[i] = btime[i-1] + wtime[i-1];
    }
    cout<<"result : "<<endl;
    cout<<"PID :\t       ";
    for(int i = 0;i < n;i++){
        cout<<pname[i]<<" ";
    }
    cout<<endl;
    cout<<"burst time :   ";
    for(int i = 0;i < n;i++){
        cout<<btime[i]<<" ";
    }
    cout<<endl;
    cout<<"waiting time : ";
    for(int i = 0;i < n;i++){
        cout<<wtime[i]<<" ";
    }
}
