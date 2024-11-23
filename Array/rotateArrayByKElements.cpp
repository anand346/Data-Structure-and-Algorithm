#include<bits/stdc++.h>
using namespace std;


vector<int> rotateToRight(vector<int> &arr,int k){
    
    k %= arr.size();

    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
}

int main(){


}