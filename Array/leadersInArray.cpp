#include<bits/stdc++.h>
using namespace std;

vector<int> printLeaders(int a[],int n){
    vector<int> ans;

    ans.push_back(a[n-1]);
    int max = a[n-1];
    for(i = n-2;i >= 0;i--){
        if(a[i] > max){
            ans.push_back(a[i]);
            max = a[i];
        }
    }
    
    return ans;
}

int main(){

}