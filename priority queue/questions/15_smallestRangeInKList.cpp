#include<bits/stdc++.h>
using namespace std;

vector<int> smallestRange(vector<vector<int>>& nums){
    vector<int> res = {-100000,100000};
    int k = nums.size();
    int maxi = INT_MIN;

    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;

    for(int i = 0;i < k;i++){
        int num = nums[i][0];
        vector<int>vec{num,0,i};

        maxi = max(maxi,num);
        pq.push(vec);
    }

    while(true){
        vector<int> minval = pq.top();
        pq.pop();
        if(res[1]-res[0]>maxi-minval[0]){
            res[0] = minval[0];
            res[1] = maxi;
        }
        minval[1]++;
        vector<int> vec2 = nums[minval[2]];
        if(minval[1]==vec2.size()){
            break;
        }else{
            minval[0]=vec2[minval[1]];
            maxi=max(maxi,vec2[minval[1]]);
            pq.push(minval);
        }
    }
    return res;
}

int main(){

}