#include<bits/stdc++.h>
using namespace std;


int fun(int n,int a[]){


    int res = 0;
    for(int i  = 0;i < n;i++){
        res = res^a[i];
    }

    return res;
}

int main(){

    int n = 5;
    int a[n] = {1,1,2,2,3};
    cout<<fun(n,a);

}