// https://youtu.be/aXJ-p3Qa4TY

#include<bits/stdc++.h>
using namespace std;

int kLargestElement(int *input,int n,int k){


    priority_queue<int,vector<int>,greater<int>> pq(input,input+n); // 0(N)
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

int main(){
    int a[] = {5,6,9,12,3,13,2,8,7};
    cout<<kLargestElement(a,7,4);
}