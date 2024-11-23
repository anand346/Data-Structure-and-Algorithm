// https://www.enjoyalgorithms.com/blog/sort-stack-using-temporary-stack

#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :
        void sortStack(stack<int> &st){
            stack<int> tempStack;

            while(!st.empty()){
                int topInputStack = st.top();
                while(!tempStack.empty() and tempStack.top() > topInputStack){
                    int topTempStack = tempStack.top();
                    tempStack.pop();
                    st.push(topTempStack);
                }

                tempStack.push(topInputStack);
            }

            while(!tempStack.empty()){
                cout<<tempStack.top()<<" ";
                tempStack.pop();
            }
            
        }
}