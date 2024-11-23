// https://www.youtube.com/watch?v=n5XaFXQjlIY
// https://practice.geeksforgeeks.org/problems/game-with-string4100/1

#include<bits/stdc++.h>
using namespace std;


int minValue(string s,int k){
    unordered_map<char,int> mp;

    for(int i = 0;i < s.length();i++){
        mp[s[i]]++;
    }

    priority_queue<int> pq;

    for(auto x : mp){
        pq.push(x.second);
    }
    while(k){
        int x= pq.top();
        pq.pop();
        x--;
        pq.push(x);
        k--;
    }
    int sum = 0;
    while(!pq.empty()){
        int d = pq.top();
        sum = sum + (d*d);
        pq.pop();
    }
    return sum; 
}