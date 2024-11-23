#include<bits/stdc++.h>
using namespace std;

int detectCycleInDirectedGraph(int n,vector<pair<int,int>> &edges){
    
    unordered_map<int,list<int>> adj;

    for(int i = 0;i < edges.size();i++){

        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
    }


    // find out indegreee
    vector<int> indegree(n);
    for(auto i : adj){
        for(auto j : i.second){

            indegree[j]++;
        }
    }

    // push 0 indegree in queue
    queue<int> q;

    for(int i = 1;i <= n;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    // do bfs
    // vector<int> ans;
    int cnt = 0;
    while(!q.empty()){

        int front = q.front();
        q.pop();

        // ans.push_back(front);
        // increment count
        cnt++;

        for(auto neighbour : adj[front]){

            indegree[neighbour]--;

            if(indegree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
    return cnt == n; // if the no. of cnt = no. of vertices then it's acyclic (bcz of valid topological sort)
    // if the no. of cnt != no. of vertices then it's cyclic
}


int main(){

}