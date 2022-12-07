#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> q2; //max heap
    priority_queue<int,vector<int>,greater<int>> q; //min heap
    q.push(6);
    q.push(90);
    q.push(45);
    q.push(33);
    q.push(156);
    q.push(29);

    cout<<q.size()<<" ";
    cout<<q.top()<<" ";
    q.pop();
    cout<<q.size()<<" ";
    return 0;
}