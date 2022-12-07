// https://www.youtube.com/watch?v=7WYwqvOSaa8
//same as gas station problem of array
// https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1

#include<bits/stdc++.h>
using namespace std;


int petrolPump(vector<pair<int,int>> nums){
    int start = 0;
    int requiredFuel = 0;
    int extrafuel = 0;
    int n = nums.size();

    for(i = 0;i < n;i++){
        extrafuel += nums[i].first - nums[i].second;
        if(extrafuel < 0){
            start = i+1;
            requiredFuel += extrafuel;
            extrafuel = 0;
        }
    }

    if(requiredFuel + extrafuel >= 0){
        return start;
    }
    return -1;
}

int main(){
    // pair<int,int> p = {petrol,distance}

}