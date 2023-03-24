#include<iostream>
#include<queue>
using namespace std;
void kSortedArray(int *input,int n,int k){

    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 0;i < k;i++){
        pq.push(input[i]);
    }
    int s = 0;
    for(int i = k;i < n;i++){
        input[s] = pq.top();
        pq.pop();
        s++;
        pq.push(input[i]);
    }

    while(!pq.empty()){
        input[s] = pq.top();
        pq.pop();
        s++;
    }
}

// with heap
// time complexity : O(K) + O(M*log(K)); M = N-K;
// auxiliary space : O(K)

// with quick sort
// time complexity : O(NlogN)
// auxiliary space : O(logN)

// with insertion sort
// time complexity : O(N*K)
// auxiliary space : O(1)

int main(){
    int a[] = {10,12,6,7,9};
    kSortedArray(a,5,3);
    for(int i = 0;i < 5;i++){
        cout<<a[i]<<" ";
    }
}