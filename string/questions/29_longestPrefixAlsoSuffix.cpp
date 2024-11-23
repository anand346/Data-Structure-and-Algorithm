// https://www.geeksforgeeks.org/longest-prefix-also-suffix/

#include<bits/stdc++.h>
using namespace std;


int lps(string s){

    int j = 0;
    int n = s.size();
    int i = 1;
    vector<int> lps(n,0);
    
    while(i < n){
        
        if(s[i] == s[j]){
            j++;
            lps[i] = j;
            i++;
        }else{
            if(j != 0){
                j = lps[j-1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }
    
    return j;
}

int main(){


}