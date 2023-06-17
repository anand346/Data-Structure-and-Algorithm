#include<bits/stdc++.h>
using namespace std;


bool checkpalindrome(string str,int s,int e){

    if(s >= e){
        return true;
    }

    if(str[s] == str[e]){
        return checkpalindrome(str,s+1,e-1);
    }else{
        return false;
    }
}
int main(){
    cout<<checkpalindrome("hello",0,4);
}