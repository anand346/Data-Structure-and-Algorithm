#include<bits/stdc++.h>
using namespace std;

int longestKSubstr(string s,int k){

    int n = s.size();
    int i = 0;
    int j = 0;
    int ans = -1;
    unordered_map<char,int> mp;
    
    while(j < n){
        mp[s[j]]++;

        if(mp.size() == k){
            ans = max(ans,j-i+1);
        }
        while(mp.size() > k){
            mp[s[i]]--;
            if(mp[s[i]] == 0){
                mp.erase(s[i]);
            }
            i++;
        }
        j++;
    }

    return ans;
}


int main(){


}