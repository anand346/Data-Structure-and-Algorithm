#include<bits/stdc++.h>
using namespace std;

bool areKAnagrams(string str1,string str2,int k){

    if(str1.length() != str2.length()){
        return false;
    }

    int count == 0;
    unordered_map<char,int> mp;

    for(int i = 0;i < str1.length();i++){
        mp[str1[i]]++;
    }

    for(int i = 0;i < str1.length();i++){
        if(mp[str2[i]] == 0){
            count++;
        }else{
            mp[str2[i]]--;
        }
    }

    if(count <= k){
        return true;
    }else{
        return false;
    }
}

int main(){

}