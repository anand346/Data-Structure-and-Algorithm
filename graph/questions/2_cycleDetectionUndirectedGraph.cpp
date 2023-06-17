#include<bits/stdc++.h>
using namespace std;

bool isCycleBFS(int src,unordered_map<int,list<int>> &adj,unordered_map<int,bool> &visited){

    unordered_map<int,int> parent;

    parent[src] = -1;
    visited[src] = true;

    queue<int> q;
    q.push(src);

    while(!q.empty()){

        int front = q.front();
        q.pop();

        for(auto neighbour : adj[front]){

            if(visited[neighbour] && neighbour != parent[front]){
                return true;
            }

            if(!visited[neighbour]){
                visited[neighbour] = true;
                parent[neighbour] = front;
                q.push(neighbour);
            }
        }
        return false;
    }


}

bool isCycleDFS(int node,int parent,unordered_map<int,list<int>> &adj,unordered_map<int,bool> &visited){

    visited[node] = true;

    for(auto neighbour : adj[node]){

        if(!visited[neighbour]){
            bool ans = isCycleDFS(neighbour,node,adj,visited);
            if(ans){
                return true;
            }
        }else if(neighbour != parent){
            return true;
        }
        
    }

    return false;
}


string checkCycle(vector<vector<int>> edges,int n,int m){


    unordered_map<int,list<int>> adj;

    for(int i = 0;i < m;i++){

        int u = edges[i][0];
        int v = edges[i][1];


        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int,bool> visited;

    for(int i = 0;i < n ;i++){

        if(!visisted[i]){

            // bool ans = isCycleBFS(i,adj,visited);
            bool ans = isCycleDFS(i,-1,adj,visited);
            if(ans){
                return "Yes";
            }
        }
    }

    return "No";
}


int main(){

}