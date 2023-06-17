// striver

#include<bits/stdc++.h>
using namespace std;


void sortInsert(stack<int> st,int key){


    if(st.empty() || key > st.top()){
        st.push(key);
        return ;
    }

    int top = st.top();
    st.pop();

    sortInsert(st,key);

    st.push(top);
}

void sortStack(stack<int> st){

    if(st.empty()){
        return ;
    }

    int top = st.top();
    st.pop();

    sortStack(st);

    sortInsert(st,top);
}

void printStack(stack<int> &st){

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return ;
}

int main(){

    vector<int> list = {5,-2,9,-7,3};

    stack<int> st;
    for(int it : list){
        st.push(it);
    }
    sortStack(st);
    printStack(st);
}


// gfg method

// class SortedStack{
// public:
// 	stack<int> s;
// 	void sort();
// };


/* The below method sorts the stack s 
you are required to complete the below method */

void insertSorted(stack<int> &st,int key){
    
    if(st.empty() || key > st.top()){
        st.push(key);
        return ;
    }
    
    int top = st.top();
    st.pop();
    
    insertSorted(st,key);
    
    st.push(top);
}

void SortedStack :: sort()
{
   //Your code here
   if(s.empty()){
       return ;
   }
   
   int top = s.top();
   s.pop();
   
   SortedStack::sort();
   
   insertSorted(s,top);
}

// time complexity : O(n^2)
// space complexity : O(n)