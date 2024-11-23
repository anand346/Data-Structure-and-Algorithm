// https://www.youtube.com/watch?v=dshWERdcAdg

#include<bits/stdc++.h>
using namespace std;


class MedianFinder {
public:
    priority_queue<int> small;
    priority_queue<int, vector<int>, greater<int>> big;
    
    void addNum(int num) {
        small.push(num);
        big.push(small.top());
        small.pop();
        
        if (big.size() > small.size()) {
            small.push(big.top());
            big.pop();
        }
    }
    
    double findMedian() {
        if (big.size() == small.size())
            return 0.5 * (big.top() + small.top());
        return small.top();
    }
};


class MedianPriorityQueue{

    priority_queue<int,vector<int>,greater<int>> left;
    priority_queue<int> right;

    public :
        MedianPriorityQueue(){

        }

        void add(int val){
            if(right.size() > 0 && val > right.top()){
                right.push(val);
            }else{
                left.push(val);
            }

            if(left.size() - right.size() == 2){
                right.push(left.top());
                left.pop();

            }else if(right.size() - left.size() == 2){
                left.push(right.top());
                right.pop();
            }
        }
        
        int remove(){
            f(this->size() == 0){
                cout<<"underflow"<<endl;
                return -1;
            }else if(left.size() >= right.size()){
                int v = left.top();
                left.pop()
                return v;
            }else{
                int x = right.top();
                right.pop()
                return x;
            }
        }

        int peek(){
            if(this->size() == 0){
                cout<<"underflow"<<endl;
                return -1;
            }else if(left.size() >= right.size()){
                return left.top();
            }else{
                return right.top();
            }
        }

        int size(){
            return left.size() + right.size();
        }
}

int main(){

}