#include<bits/stdc++.h>
using namespace std;




vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {

vector<vector<int>>graph;

for(int i=0;i<n;i++){

    vector<int>ans;

    ans.push_back(i);

    graph.push_back(ans);

}

for(int i=0;i<m;i++){

    graph[edges[i][0]].push_back(edges[i][1]);

    graph[edges[i][1]].push_back(edges[i][0]);

}

return graph;
}
int main(){


}