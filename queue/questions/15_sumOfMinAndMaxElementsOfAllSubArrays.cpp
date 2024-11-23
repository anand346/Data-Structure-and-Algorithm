// https://tutorialspoint.dev/data-structure/queue-data-structure/sum-minimum-maximum-elements-subarrays-size-k

#include<bits/stdc++.h>
using namespace std;


int sumOfKSubArrays(int a[],int n,int k){

    int sum = 0;
    deque<int> S(k) G(k);

    for(int i = 0;i < k;i++){
        
        while(!S.empty() and a[S.back()] >= a[i]){
            S.pop_back();
        }

        while(!G.empty() and a[G.back()] <= a[i]){
            G.pop_back();
        }

        S.push_back(i);
        G.push_back(i);
    }


    int sum = 0;
    for( ; i < n;i++){

        sum += a[S.front()] + a[G.front()];
        while(!S.empty() and S.front() == (i-k)){
            S.pop_front();
        }

        while(!G.empty() and G.front() == (i-k)){
            G.pop_front();
        }

        while(!S.empty() and a[S.back()] >= a[i]){
            S.pop_back();
        }

        while(!G.empty() and a[G.back()] <= a[i]){
            G.pop_back();
        }

        S.push_back(i);
        G.push_back(i);
    }

    sum += a[S.front()] + a[G.front()];
    return sum;
}