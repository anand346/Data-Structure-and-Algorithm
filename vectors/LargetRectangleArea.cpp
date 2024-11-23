// https://www.youtube.com/watch?v=dAVF2NpC3j4

#include<bits/stdc++.h>
using namespace std;



class Solution{
    public:
  vector<int> nextSmallerElement(int *arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=n-1; i>=0 ; i--) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerElement(int* arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=0; i<n; i++) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans; 
    }    
    
  
  
  int largestRectangleArea(int* heights, int n) {
        //int n= heights.size();
        
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
            
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
        
        int area = INT_MIN;
        for(int i=0; i<n; i++) {
            int l = heights[i];
            
            if(next[i] == -1) {
                next[i] = n;
            }
             int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }

    int maxArea(int M[4][4], int n, int m) {
        // Your code here
        int area=largestRectangleArea(M[0],m);
        
       for(int i = 1; i<n; i++) {
            for(int j = 0; j<m; j++) {
                
                //row udpate: by adding previous row's value
                if(M[i][j] != 0)
                    M[i][j] = M[i][j] + M[i-1][j];
                else
                    M[i][j] = 0;
            }
            
            //entire row is updated now
            area = max(area, largestRectangleArea(M[i],m));
            
        }
        return area;
    }
};
int main(){
    int matrix[][4] = {{0,1,1,0},
                        {1,1,1,1},
                        {1,1,1,1},
                        {1,1,0,0}};

    Solution s;

    vector<int> ans = s.nextSmallerElement(matrix[0],4);
    vector<int> ans1 = s.prevSmallerElement(matrix[0],4);

    for(auto x : ans){
        cout<<x<<" ";
    }
    for(auto x : ans1){
        cout<<x<<" ";
    }
}