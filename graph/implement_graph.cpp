#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{

    public :
        unordered_map<T,list<T>> adj;

        void addEdge(T u,T v,int direction){

            // direction = 0 -> undirected graph
            // direction = 1 -> directed graph

            adj[u].push_back(v);

            if(direction == 0){
                adj[v].push_back(u);
            }
        }

        void printGraph(){

            for(auto i : adj){
                cout<<i.first <<" : ";
                for(T j : i.second){
                    cout<<j<<", ";
                }
                cout<<endl;
            }
        }
};

int main(){
    Graph<int> g;
    int m;
    cout<<"Enter no. of edges : ";
    cin>>m;
    int u,v;
    for(int i = 0;i < m;i++){
        cout<<"Enter vertices : ";
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    g.printGraph();
    

}