// topological sort can be applied only on directed acyclic graph

#include<bits/stdc++.h>
using namespace std;

void topoSort(int node,stack<int> &s,vector<bool> &visited,unordered_map<int,list<int>> &adj){


    visited[node] = true;


    for(auto neighbour : adj[node]){

        if(!visited[neighbour]){
            topoSort(neighbour,s,visited,adj);
        }
    }

    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges,int v,int e){

    vector<bool> visited(v);

    unordered_map<int,list<int>> adj;
    for(int i = 0;i < e;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    stack<int> s;
    for(int i = 0;i < v;i++){

        if(!visited[i]){
            topoSort(i,s,visited,adj);
        }
    }

    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}


int main(){

}