#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> &arr){
    int n = arr.size();

    int maxi = 0;
    int cnt = 0;
    for(int i = 0;i < n;i++){
        
        if(arr[i] == 1){
            cnt++;
        }else{
            cnt = 0;
        }

        maxi = max(maxi,cnt);
    }
    return maxi;
}

int main(){

}