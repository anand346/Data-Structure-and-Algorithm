// https://youtu.be/aXJ-p3Qa4TY

#include<bits/stdc++.h>
using namespace std;

int kthLargestElement(int *input,int n,int k){

    priority_queue<int,vector<int>,greater<int>> pq(input,input+k); // 0(N)
    
    for(int i = k;i < n;i++){
        if(input[i] > pq.top()){
            pq.pop();
            pq.push(input[i]);
        }
    }

    return pq.top();
}

int kthSmallestElement(int *input,int n,int k){
    priority_queue<int> pq(input,input+k);

    for(int i = k;i < n;i++){
        if(input[i] < pq.top()){
            pq.pop();
            pq.push(input[i]);
        }
        
    }
    return pq.top();
}

int main(){
    int a[] = {5,6,9,12,3,13,2,8,7,1};
    cout<<kthSmallestElement(a,10,4);
}