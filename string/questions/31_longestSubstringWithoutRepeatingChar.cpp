#include<bits/stdc++.h>
using namespace std;

 int longestUniqueSubsttr(string s){
    vector<int> v(26,0);
    int count=0;
    int n=S.size();
    int i=0;
    int j=0;
    int ans=0;
    while( j<n)
    {
        v[S[j]-'a']++;
        count++;
        while( v[S[j]-'a']>1 && i<j)
        {
            v[S[i]-'a']--;
            i++;
            count--;
            
        }
        j++;
        ans=max( ans,count);
    }
    return ans;
 }

int main(){
    
}