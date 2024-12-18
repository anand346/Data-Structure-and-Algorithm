#include<bits/stdc++.h>
using namespace std;


bool checkCycleDFS(int node,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsvisited,unordered_map<int,list<int>> &adj){

    visited[node] = true;
    dfsvisited[node] = true;


    for(auto neighbour : adj[node]){
        if(!visited[neighbour]){

            bool ans = checkCycleDFS(neighbour,visited,dfsvisited,adj);
            if(ans){
                return true;
            }
        }else if(dfsvisited[neighbour]){
            return true;
        }
    }

    dfsvisited[node] = false;
    return false;
}

bool detectCycleInDirectedGraph(int n,vector<pair<int,int>> &edges){


    unordered_map<int,list<int>> adj;
    for(int i = 0;i < edges.size();i++){

        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
    }

    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsvisited;

    for(int i = 1;i <= n;i++){

        if(!visited[i]){

            bool ans = checkCycleDFS(i,visited,dfsvisited,adj);
            if(ans){
                return true;
            }
        }
    }

    return false;
}


int main(){

}