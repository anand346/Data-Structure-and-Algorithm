// https://leetcode.com/problems/car-fleet/solutions/2677844/c-detailed-explanation-with-testcase-monotonic-stack-easy-to-understand/

// https://www.youtube.com/watch?v=PemeYPadst4

#include<bits/stdc++.h>
using namespace std;

class Solution{

    public :
        int carFleet(int target, vector<int>& position, vector<int>& speed){

            vector<pair<int,int>> nums;
            int n = position.size();
            for(int i = 0;i < n;i++){
                nums.push_back({position[i],speed[i]});
            }


            sort(nums.begin(),nums.end());

            stack<double> st;

            for(int i = n-1;i >= 0;i--){
                double tt = (target-nums[i].first)/((double)nums[i].second);

                if(st.empty() || st.top() < tt){
                    st.push(tt);
                }
            }
            return st.size();
        }
}


int carFleet(int target, vector<int>& position, vector<int>& speed) {
    int n = position.size();
    vector<pair<int,double>> vt;

    for(int i = 0;i < n;i++){
        vt.push_back({position[i],speed[i]});
    }

    sort(vt.begin(),vt.end());

    for(int i = 0;i < n;i++){
        vt[i].second = (double)((target-vt[i].first)/vt[i].second);
    }

    int nof = 1;
    double tt = vt[n-1].second;

    for(int i = n-2;i >= 0;i--){
        if(vt[i].second>tt){
            nof++;
            tt = vt[i].second;
        }
    }
    return nof;
}


