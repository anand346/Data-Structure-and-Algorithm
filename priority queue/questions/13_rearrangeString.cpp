// https://www.youtube.com/watch?v=v3f30xiaPVc 

#include<bits/stdc++.h>
using namespace std;


char getMaxCountChar(const vector<int>& count){
    int max = 0;
    char ch; 
    for(int i = 0;i < 26;i++){
        if(count[i] > max){
            max = count[i];
            ch = 'a'+i;
        }
    }

    return ch;
}

string rearrangeString(string str){
    int n = str.size();

    if(!n) return "";

    vector<int> count(26,0);
    for(auto ch : str){
        count[ch-'a']++;
    }

    char ch_max = getMaxCountChar(count);
    int maxCount = count[ch_max - 'a'];

    if(maxCount > (n+1)/2){
        return "-1";
    }
    string res(n," ");

    int idx = 0;
    while(maxCount){
        res[idx] = ch_max;
        idx = idx+2;
        maxCount--;
    }

    count[ch_max-'a'] = 0;

    for(int i = 0;i < 26;i++){
        while(count[i] > 0){
            idx = (idx >= n) ? 1 : idx;
            res[idx] = 'a'+i;
            idx += 2;
            count[i]--;
        }
    }
    return res;
}


int main(){

}