#include<bits/stdc++.h>
using namespace std;


string lookandsay(int n) {

    if(n == 1) return "1";
    if(n == 2) return "11";
    if(n == 3) return "21";
    if(n == 4) return "1211";
    if(n == 5) return "111221";
    if(n == 6) return "312211";

    string prev = lookandsay(n-1);

    int cnt = 1;
    char curr = prev[0];
    string res = "";
    for(int i = 1;i < prev.length();i++){

        if(prev[i] != curr){
            res += to_string((cnt))+(curr);
            curr = prev[i];
            cnt = 1;
        }else{
            cnt++;
        }
    }

    res += to_string((cnt))+(curr);

    return res;
}

int main(){
    cout<<lookandsay(7);

}