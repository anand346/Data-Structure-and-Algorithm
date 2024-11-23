#include<bits/stdc++.h>
using namespace std;

string encryptString(string s){

    string ans = "";
    char on = s[0];
    int count = 1;
    for(int i = 1;i <= s.length();i++){
        if(s[i] == s[i-1]){
            count++;
        }else{
            ans += on;
            string hx = "";

            while(count != 0){
                int rem = count%16;
                if(rem < 10){
                    hx += ('0'+rem);
                }else{
                    hx += ('a'+(rem-10));
                }
                count /= 16;
            }
            ans += hx;
            on = s[i];
            count = 1;
        }
    }

    if(ans == ""){
        ans += on;
        string hx = "";

        while(count != 0){
            int rem = count%16;
            if(rem < 10){
                hx += ('0'+rem);
            }else{
                hx += ('a'+(rem-10));
            }
            count /= 16;
        }
        ans += hx;
    }

    string finalAns = "";
    for(int i = ans.length()-1;i >= 0;i-- ){
        finalAns += ans[i];
    }
    return finalAns;
}
int main(){
    string s = "abcd";
    string out = encryptString(s);
    cout<<out;
}