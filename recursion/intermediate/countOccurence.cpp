#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void countOccurence(int a[],int n,int x,int i,int &ans){
    if(n==i){
        return;
    }
    if(a[i] == x){
        ans++;
    }
    countOccurence(a,n,x,i+1,ans);
}
void countOccurence1(int a[],int n,int x,int &ans){
    if(n < 0){
        return;
    }
    if(a[0] == x){
        ans++;
    }
    countOccurence1(a+1,n-1,x,ans);
}
int countOccurence2(int a[],int n, int x){
    if(n < 0){
        return 0;
    }
    if(a[0] == x){
        return countOccurence2(a+1,n-1,x) + 1;
    }else{
        return countOccurence2(a+1,n-1,x);
    }
}
int main(){
    int a[8] = {1,2,3,3,4,3,5,5};
    cout<<countOccurence2(a,8,3);
}