#include<bits/stdc++.h>
using namespace std;


int getSetBits(int n){

    int count = 0;
    while(n){
        count++;
        n = n&(n-1);
    }

    return count;
}


int main(){

    int n;
    cin>>n;
    cout<<"total set bit "<<getSetBits(n);

}