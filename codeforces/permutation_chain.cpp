#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        cout<<n<<endl;
        for(int i = n;i >= 1;--i){
            int cnt = 0;
            for(int j = 1;j <= n;++j){
                if(j == i) cout<<n<<" ";
                else cout<<(++cnt)<<" ";
            }
            cout<<endl;
        }
    }
}