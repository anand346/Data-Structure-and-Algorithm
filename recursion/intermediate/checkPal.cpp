#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkPal(int a[],int s,int e){
    if(s > e){
        return true;
    }
    if(a[s] == a[e]){
        return checkPal(a,s+1,e-1);
    }else{
        return false;
    }
}
// bool checkPal1(int a[],int s,int e){
//     if(s > e){
//         return true;
//     }
//     if(a[s] == a[e]){
//         return true;
//     }else{
//         return false;
//     }
//     bool small = checkPal(a,s+1,e-1);
//     return small;
// }
int main(){
    int a[] = {1,2,3,4,5,2,1};
    cout<<checkPal(a,0,6);
}