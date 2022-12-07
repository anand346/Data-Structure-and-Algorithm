#include<bits/stdc++.h>
using namespace std;
int main(){
    int v[2000];
    int n;cin>>n;
    for(int i=0;i < n;++i){
        cin>>v[i];
    }

    unordered_map<int,int> mp;
    int ans = n;
    for(int i = n-1;i >= 0;--i){
        if(!mp.count(v[i])){
            --ans;
        }else{
            break;
        }
        mp[v[i]]++;
    }
    cout<<ans<<endl;

}