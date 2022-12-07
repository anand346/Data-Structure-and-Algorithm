// https://leetcode.com/problems/min-stack/

class MinStack {
public:
    vector<pair<int,int>> vt;
    MinStack() {}
    
    void push(int val) {
        if(vt.empty()){
            vt.push_back({val,val});
        }else{
            vt.push_back({val,min(vt.back().second,val)});
        }
    }
    
    void pop() {
        vt.pop_back();
    }
    
    int top() {
        return vt.back().first;
    }
    
    int getMin() {
        return vt.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */