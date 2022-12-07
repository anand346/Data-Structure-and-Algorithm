#include<iostream>
#include<queue>
using namespace std;

void kSmallestElement(int *input,int n,int k){
    priority_queue<int> pq;
    for(int i = 0;i < k;i++){
        pq.push(input[i]);
    }
    for(int i = k;i < n;i++){
        if(input[i] < pq.top()){
            pq.pop();
            pq.push(input[i]);
        }
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

void kSmallestElement2(int *input,int n,int k){ //using min heap
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 0;i < n;i++){
        pq.push(input[i]);
    }
    for(int i = 0;i < k;i++){
            cout<<pq.top()<<" ";
            pq.pop();
    }
}

int main(){
    int a[] = {5,6,9,12,3,13,2};
    kSmallestElement2(a,7,4);
}