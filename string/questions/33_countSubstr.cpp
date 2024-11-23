// https://www.geeksforgeeks.org/count-number-of-substrings-with-exactly-k-distinct-characters/

#include<bits/stdc++.h>
using namespace std;
long long int solve(string s, int k){
    int i = 0;
    int j = 0;
    long long int ans = 0;
    int mp[26] = {0};
    int dist_char=0;
    auto n = s.size();
    while(j<n){
        mp[s[j]-'a']++;
        
        if(mp[s[j]-'a']==1)
            dist_char++;
            
        while(dist_char > k){
            
            mp[s[i]-'a']--;
            
            if(mp[s[i]-'a']==0)
                dist_char--;
            i++;
            
        }
        ans+=j-i+1;
        j++;
    }
    return ans;
}
long long int substrCount (string s, int k) {
    auto ans = solve(s,k) - solve(s, k-1);
    return ans;
}
int main(){


}