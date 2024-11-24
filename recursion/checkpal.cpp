#include<bits/stdc++.h>
using namespace std;

bool checkPal(char str[],int s,int e){

    if(s >= e){
        return true;
    }
    if(str[s] == str[e]){
        return checkPal(str,s+1,e-1);
    }else{
        return false;
    }
}

int main(){

    char str[] = "aabaa";
    cout<<checkPal(str,0,4)<<endl;
}