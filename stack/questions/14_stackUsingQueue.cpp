#include<bits/stdc++.h>
using namespace std;


// using two queues

/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1,q2);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code
        int ans;
        if(q2.empty()){
            ans = -1;
        }else{
            ans = q2.front();
            q2.pop();
        }
        return ans;
}


// using only one queue

class MyStack {
public:
    queue<int> myq;
    int size = 0;
    MyStack() {
        
        size = 0;
    }
    
    void push(int x) {
        
        myq.push(x);
        int hel = myq.size()-1;
        while(hel--){
            int f = myq.front();
            myq.push(f);
            myq.pop();
        }
    }
    
    int pop() {
        int ans ;
        if(myq.empty()){
            return -1;
        }else{
            ans = myq.front();
            myq.pop();
        }
        return ans;
        
    }
    
    int top() {
        if(myq.empty()){
            return -1;
        }else{
            return myq.front();
        }
    }
    
    bool empty() {
        return myq.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */