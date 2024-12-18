// https://leetcode.com/problems/number-of-recent-calls
// https://www.youtube.com/watch?v=HlmNEfcgyjM

#include<bits/stdc++.h>
using namespace std;


class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
        while(q.front() < t-3000){
            q.pop();
        }
        return q.size();
    }
};