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
    cout<<"size is "<<q.size()<<endl;
    cout<<"top element "<<q.top()<<endl;
    cout<<"popping element"<<endl;
    q.pop();
    cout<<"after popping top : "<<q.top()<<endl;
    cout<<"after popping size : "<<q.size();
    return 0;
}