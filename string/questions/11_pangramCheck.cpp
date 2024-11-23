#include<bits/stdc++.h>
using namespace std;

bool checkPangram(string &str){

    bool alList[27];
    for(int i = 0;i < str.length();i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            int ind = str[i] - 'A';
            alList[ind] = true;
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            int ind = str[i] - 'a';
            alList[ind] = true;
        }
    }

    bool ans = true;
    for(int i = 0;i <= 25;i++){
        if(alList[i] == false){
            ans = false;
        }
    }
    return ans;
}

int main(){

    
}