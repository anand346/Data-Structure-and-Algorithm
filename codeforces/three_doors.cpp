#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,key;
    cin>>t;
    while(t--){
        cin>>key;
        int arr[3];
        for(int i = 0;i < 3;++i){
            cin>>arr[i];
        }
        unordered_map<int,int> mp;
        while(key--){
            ++key;
            mp[key]++;
            key = arr[key-1];
        }
        int flag = 1;
        for(int i = 1;i <= 3;i++){
            if(!mp.count(i)){
                flag = 0;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}