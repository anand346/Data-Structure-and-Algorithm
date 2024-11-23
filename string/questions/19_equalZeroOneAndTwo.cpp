#include<bits/stdc++.h>
using namespace std;

long long getSubstringWithEqual012(string str) {

    map<pair<int,int>,int> mp;
    int count = 0;
    int c0=0,c1=0,c2=0;
    mp[{0,0}] = 1;

    for(int i = 0;i < str.length();i++){
        if(str[i] == '0'){
            c0++;
        }
        if(str[i] == '1'){
            c1++;
        }
        if(str[i] == '2'){
            c2++;
        }

        pair<int,int> currKey = {c1-c0,c2-c1};
        if(mp.find(currKey) != mp.end()){
            count += mp[currKey];
        }
        mp[currKey]++;
    }
    return count;

}
int main(){
    string inp = "0102010";
    cout<<getSubstringWithEqual012(inp);

}