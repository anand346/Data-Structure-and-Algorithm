#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mySearch(vector<int> a,int key){
    int s= 0;
    int e= a.size() -1;
    while(s <= e){
        int mid = (s+e)/2;
        if(a[mid] == key){
            return mid;
         }
        if(a[s] <= a[mid]){
            if(key >= a[s] && key <= a[mid]){
                e = mid -1;
            }else{
                s = mid +1;
            }
        }else{
            if(key >= a[mid] && key <= a[e]){
                s = mid +1;
            }else{
                e = mid -1;
            }
        }
    }
    return -1;
}
int main(){
    // vector<int> a = {4,5,6,7,8,9,1,2,3}; // 1st condition true;
    vector<int> a = {4,5,1,2,3}; //2nd condition true;
    // vector<int> a = {1,2,3,4,5,6,7,8,9};
    int key = 8;
    int result = mySearch(a,key);
    cout<<result;
}