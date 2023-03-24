// https://youtu.be/Z0qmsZefzXA

#include<bits/stdc++.h>
using namespace std;


int connectTwoRopes(vector<int> ropes){
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i = 0;i < ropes.size();i++){
        pq.push(ropes[i]);
    }
    int minCost = 0;


    while(pq.size() > 1){
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();

        int tempCost = first+second;
        minCost = minCost + tempCost;
        pq.push(tempCost);
    }

    return minCost;
}
// time complexity : O(NlogN);
// auxiliary space : O(N);
int main(){

}