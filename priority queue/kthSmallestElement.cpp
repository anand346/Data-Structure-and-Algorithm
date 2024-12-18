#include<iostream>
#include<queue>
using namespace std;

void kthSmallestElement(int *input,int n,int k){
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

void kthSmallestElement2(int *input,int n,int k){ //using min heap
    // priority_queue<int,vector<int>,greater<int>> pq; // NlogN
    priority_queue<int,vector<int>,greater<int>> pq(input,input+n); // 0(N)
    for(int i = 0;i < n;i++){
        pq.push(input[i]);
    }
    for(int i = 0;i < k;i++){
            cout<<pq.top()<<" ";
            pq.pop();
    }
}

int kthLargestElement(int *input,int n,int k){


    priority_queue<int,vector<int>,greater<int>> pq; // 0(N)
    for(int i = 0;i < n;i++){
        if(pq.size() < k){
            pq.push(input[i]);
        }else{
            if(pq.top()<input[i]){
                pq.pop();
                pq.push(input[i]);
            }
        }
    }

    return pq.top();
}
// for largest nd smallest element using heap , time complexity O(NlogK)
// using merge sort , time complexity O(NlogN)
int main(){
    int a[] = {5,6,9,12,3,13,2};
    cout<<kthLargestElement(a,7,2);
}