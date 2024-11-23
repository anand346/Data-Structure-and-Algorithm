#include<bits/stdc++.h>
using namespace std;


void reverseFirstKElement(queue<int> q,int k){
    if(q.empty() || k > q.size()){
        return ;
    }

    stack<int> stk;

    for(int i = 0;i < k;i++){

        stk.push(q.front());
        q.pop();
    }

    while(!stk.empty()){
        q.push(stk.top());
        stk.pop();
    }

    for(int i = 0;i < q.size()-k;i++){
        q.push(q.front());
        q.pop();
    }
}