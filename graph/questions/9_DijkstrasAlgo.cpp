#include<bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>> &vec,int vertices,int edges,int source){

    unordered_map<int,list<pair<int,int>>> adj;

    for(int i = 0;i < edges;i++){

        int u = vec[i][0];
        int u = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int> dist(vertices,INT_MAX);

    dist[source] = 0;

    set<pair<int,int>> st;

    st.insert(make_pair(0,source));

    while(!st.empty()){

        auto top : *(st.begin());

        int nodeDistance = top.first;
        int topNode = top.second;

        st.erase(st.begin());

        for(auto neighbour : adj[topNode]){
            if(nodeDistance + neighbour.second < dist[neighbour.first]){
                auto record = st.find(make_pair(dist[neighbour.first],neighbour.first));
                
                // if  record find
                if(record != st.end()){
                    st.erase(record);
                }

                // update distance

                dist[neighbour.first] = nodeDistance + neighbour.second;
                st.insert(make_pair(dist[neighbour.first],neighbour.first));


        }

    }





}


int main(){

}
