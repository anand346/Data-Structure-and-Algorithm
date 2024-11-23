#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    unordered_map<char,int> mp;

    int n = s.length();
    for(int i=0;i<n;i++) {
        mp[s[i]]++;
    }

    priority_queue<pair<int,int>> maxHeap;

    for(auto it : mp) {
        maxHeap.push({it.second,it.first});
    }

    string temp = "";

    while(!maxHeap.empty()) {
        int freq = maxHeap.top().first;
        char elem = maxHeap.top().second;

        for(int i=1;i<=freq;i++) {
            temp += elem;
        }

        maxHeap.pop();
    }

    return temp;
}

int main(){
    string s = "cccaaa";
}