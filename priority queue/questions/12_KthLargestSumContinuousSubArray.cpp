// https://www.youtube.com/watch?v=v3f30xiaPVc 

#include<bits/stdc++.h>
using namespace std;


int KthLargest(int *input,int n,int k){
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i = 0;i < n;i++){
        int sum = 0;
        for(int j = i;j < n;j++){
            sum += input[j];
            pq.push(sum);
            if(pq.size() > k){
                pq.pop();
            }
        }
    }
    return pq.top();
}

int main(){

    int n = 3;
    int k = 2;
    int input[] = {3,2,1};
    cout<<KthLargest(input,n,k);
}