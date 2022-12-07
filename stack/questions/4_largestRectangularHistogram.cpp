#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :
        int largestRectangleArea(vector<int>& heights) {

                int n = heights.size();
                vector<int> leftMax(n) , rightMax(n);
                stack<int> mystack;

                for(int i = 0;i < n;++i){
                    if(mystack.empty()){
                        leftMax[i] = 0;
                        mystack.push(i); 
                    }else{
                        while(!mystack.empty() && heights[mystack.top()] >= heights[i]){
                                mystack.pop();
                        }
                        leftMax[i] = mystack.empty() ? 0 : mystack.top()+1;
                        mystack.push(i);
                    }
                }

                while(!mystack.empty()){
                    mystack.pop();
                }

                for(int i = n-1;i >= 0;--i){
                    if(mystack.empty()){
                        rightMax[i] = n-1;
                        mystack.push(i);
                    }else{
                        while(!mystack.empty() and heights[mystack.top()] >= heights[i]){
                            mystack.pop();
                        }
                        rightMax[i] = mystack.empty() ? n-1 : mystack.top() -1;
                        mystack.push(i);
                    }
                }


                int mx_area = 0;
                for(int i = 0;i < n;i++){
                    mx_area = max(mx_area,heights[i]*(rightMax[i]-leftMax[i]+1));
                }

                return mx_area;


        }
}