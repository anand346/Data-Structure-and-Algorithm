#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s ;
    cin>>t;
    while(t--){
        cin>>s;
        vector<int> v;
        for(int i = 9;i >= 1;--i){
            if(s >= i){
                s -= i;
                v.push_back(i);
            }
            if(s == 0){
                sort(v.begin(),v.end());
                for(int i = 0;i < v.size();i++){
                    cout<<v[i];    
                }
                cout<<endl;
                break;
            }
        }
    }
}