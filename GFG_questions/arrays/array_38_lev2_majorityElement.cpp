#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int searchMajority(vector<int>& a){
    int cand = a[0];
    int count = 1;
    int n = a.size();
    for(int i = 1;i < a.size(); i++){
        if(a[i] == cand){
            count++;
        }else{
            count--;
            if(count == 0){
                cand = a[i];
                count = 1;
            }
        }
    }
    int count2 = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == cand){
            count2++;
        }
    }
    if(count2 >=  n/2){
        return cand;
    }else{
        return -1;
    }
}
int main(){
    vector<int> a = {1,2,2,2};
    cout<<searchMajority(a)<<endl;
}



