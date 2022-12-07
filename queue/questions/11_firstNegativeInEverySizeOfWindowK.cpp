// https://www.youtube.com/watch?v=Z5NHoo-KdxA
// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

#include<bits/stdc++.h>
using namespace std;


vector<long long> printFirstNegativeInteger(long long int A[],long long int N,long long int K){
    
    vector<long long> ans;
    queue<long long> q;

    for(int i = 0;i < K-1;i++){
        if(A[i] < 0) q.push(A[i]);
    }

    for(int i = K-1;i < N;i++){
        if(A[i]<0) q.push(A[i]);
        if(!q.empty()){
            ans.push_back(q.front());
            if(q.front() == A[i-K+1]){
                q.pop();
            }
        }else{
            ans.push_back(0);
        }
    }
    return ans;

}

int main(){



}