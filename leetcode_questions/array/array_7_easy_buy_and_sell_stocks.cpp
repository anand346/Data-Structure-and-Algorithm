#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices){
    int min = INT_MAX;
    int pist = 0;
    int op = 0;

    for(int i = 0;i < prices.size();i++){
        if(prices[i] < min){
            min = prices[i];
        }

        pist = prices[i] - min;
        if(op < pist){
            op = pist;
        }
    }
    return op;
}
int main(){
    vector<int> nums = {2,4,1};
    cout<<maxProfit(nums);
}