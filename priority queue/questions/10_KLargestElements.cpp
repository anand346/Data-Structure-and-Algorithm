#include<bits/stdc++.h>
using namespace std;


vector<int> KLargestElement(int *input,int n,int k){

    priority_queue<int,vector<int>,greater<int>> pq(input,input+k);

    for(int i = k;i < n;i++){
        if(input[i] > pq.top()){
            pq.pop();
            pq.push(input[i]);
        }
    }

    vector<int> ans;
    while(k--){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}

int main(){
    int arr[] = {10, 7, 11, 30, 8, 38, 2, 45};
    int k = 3;
    vector<int> ans = KLargestElement(arr,8,k);
    for(int num : ans){
        cout<<num<<" ";
    }
}