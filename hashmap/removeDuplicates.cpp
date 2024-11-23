#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> removeDuplicates(int *a,int n){
    vector<int> output;
    unordered_map<int,bool> mymap;
    for(int i = 0;i <n;i++){
        if(mymap.count(a[i]) == 0){
            output.push_back(a[i]);
            mymap[a[i]] = true;
        }
    }
    return output;
}
int main(){
    int a[] = {1,1,1,3,4,2,2,6,7,7};
    vector<int> output = removeDuplicates(a,10);
    for(int i = 0;i < output.size(); i++){
        cout<<output[i]<<" ";
    }
     
}