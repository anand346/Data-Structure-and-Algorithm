#include<bits/stdc++.h>
using namespace std;

vector<int> mergeHeaps(int *a,int *b,int m,int n){
    vector<int> ans;

    priority_queue<int> pq(a,a+m);
    for(int i = 0;i < n;i++){
        pq.push(b[i]);
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
}

int main(){

}