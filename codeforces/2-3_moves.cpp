#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int q = n/3;
        if(n == 1) cout<<2<<endl;
        else if(n%3) cout<<(q+1)<<endl;
        else cout<<q<<endl;
    }
}