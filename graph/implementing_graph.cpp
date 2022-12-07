#include<bits/stdc++.h>
using namespace std;

void DFSPrint(vector<vector<int>> v,int sv,vector<bool>& visited){
    cout<<sv<<endl;
    visited[sv] = true;
    for(int i = 0;i < v.size();i++){
        if(v[sv][i] == 1 && visited[i] == false){
            DFSPrint(v,i,visited);
        }
    }
}


void DFS(vector<vector<int>> arr){
    int n = arr.size();
    vector<bool> visited(n,false);
    int count = 0;
    for(int i = 0;i < n;i++){
        if(!visited[i]){
            count++;
            DFSPrint(arr,i,visited);
        }
    }
    cout<<"No. of connected components are : "<<count<<endl;
    
}


void BFSPrint(vector<vector<int>> v,int sv,vector<bool> &visited){
    int n = v.size();
    queue<int> q;
    q.push(sv);
    visited[sv] = true;
    while(!q.empty()){
        int cv = q.front();
        q.pop();
        cout<<cv<<endl;
        for(int i = 0;i < n;i++){
            if(!visited[i] && v[cv][i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

void BFS(vector<vector<int>> arr){
    int n = arr.size();
    vector<bool> visited(n,false);
    int count = 0;
    for(int i = 0;i < n;i++){
        if(!visited[i]){
            count++;
            BFSPrint(arr,i,visited);
        }
    }   
    cout<<"No. of connected components are : "<<count<<endl;
}


int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>> arr(n,vector<int>(n,0));
    vector<bool> visited(n,false);
    for(int i = 1;i <= e;i++){
        int fv,sv;
        cin>>fv>>sv;
        arr[fv][sv] = 1;
        arr[sv][fv] = 1;

    }
    cout<<"BFS"<<endl;
    BFS(arr);
    cout<<"DFS"<<endl;
    DFS(arr);
    return 0;
}