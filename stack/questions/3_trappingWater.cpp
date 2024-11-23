#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :
        int trap(vector<int> &heights){
            int n = heights.size();
            vector<int> leftMax(n,0) , rightMax(n,0);

            for(int i = 1;i < n;i++){

                leftMax[i] = max(heights[i-1],leftMax[i-1]);
            }
            for(int i = n-2;i >= 0;i--){
                rightMax[i] = max(height[i+1],rightMax[i+1]);
            }

            int ans = 0;
            for(int i = 0;i < n;i++){
                int waterLevel = min(leftMax[i],rightMax[i]);

                if(waterLevel > heights[i]) ans += waterLevel - heights[i];
            }

            return ans;
        }
}