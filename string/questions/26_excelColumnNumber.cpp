#include<bits/stdc++.h>
using namespace std;

string excelColumn(int n){

    string ans = "";
    while(n > 0){

        if(n%26 == 0){
            ans.push_back('Z');
            n = n/26 -1;
        }else{
            ans.push_back(char('A' - (n%26) - 1));
            n = n/26;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){

}