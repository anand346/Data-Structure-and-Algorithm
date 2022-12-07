// https://www.youtube.com/watch?v=4tirwGyMtUw

#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :
        void reverseQueue(queue<int>);
};

void Solution::reverseQueue(queue<int> q){

    if(q.empty()){
        return ;
    }

    int data = q.front();
    q.pop();
    reverseQueue(q);
    q.push(data);
}