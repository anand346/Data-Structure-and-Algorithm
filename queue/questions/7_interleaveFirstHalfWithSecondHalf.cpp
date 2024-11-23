#include<bits/stdc++.h>
using namespace std;


void interLeaveQueue(queue<int>& q){

    queue<int> temp;

    int half = q.size()/2;

    for(int i = 0;i < half;i++){
        temp.push(q.front());
        q.pop();

    }

    while(!temp.empty()){
        q.push(temp.front());
        q.push(q.front());
        temp.pop();
        q.pop();
    }
}

int main(){

}