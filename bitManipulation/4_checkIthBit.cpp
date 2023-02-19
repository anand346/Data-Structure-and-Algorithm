// https://www.youtube.com/watch?v=dGx0Zk6UF4w

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,i;
    cin>>n>>i;
    if(n&(1<<i-1)){
        cout<<"yes"<<endl;
    }else{
        cout<<"No"<<endl;
    };
}