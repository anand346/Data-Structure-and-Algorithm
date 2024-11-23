#include<bits/stdc++.h>
using namespace std;

int minRepeat(string a,string b){

    
    int c = 1;
    string temp = a;
    while(a.length() < b.length()){
        a += temp;
        c++;
    }

    if(a.find(b) != -1){
        return c;
    }
    a += temp;
    if(a.find(b) != -1){
        return c+1;
    }
    return -1;
}

int main(){
    string a = "abcd";
    string b = "cdabcdab";

    cout<<minRepeat(a,b);

}