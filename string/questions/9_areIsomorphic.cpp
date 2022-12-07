#include<bits/stdc++.h>
using namespace std;

bool areIsomorphic(string str1,string str2){

    if(str1.length() != str2.length()){
        return false;
    }

    unordered_map<char,char> mp1;
    unordered_map<char,bool> mp2;

    for(int i = 0;i < str1.length();i++){
        char ch1 = str1[i];
        char ch2 = str2[i];

        if(mp1.find(ch1) != mp1.end()){
            if(mp1[ch1] != ch2){
                return false;
            }
        }else{
            if(mp2[ch2] == true){
                return false;
            }else{
                mp1[ch1] = ch2;
                mp2[ch2] = true;
            }
        }
    }

    return true;
}
int main(){

}