//striver

#include<bits/stdc++.h>
using namespace std;



class Solution{
public:
    
    void insertReversed(stack<int>& st,int key){
        
        if(st.empty()){
            st.push(key);
            return;
        }
        
        int top = st.top();
        st.pop();
        
        insertReversed(st,key);
        
        st.push(top);
    }

    void Reverse(stack<int> &st){
        if(st.empty()){
            return ;
        }
        
        int top = st.top();
        st.pop();
        
        Reverse(st);
        
        insertReversed(st,top);
    }
};

// time complexity : O(n^2)
// space complexity : O(n)

int main(){

}