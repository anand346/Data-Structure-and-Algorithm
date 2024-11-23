#include<bits/stdc++.h>
using namespace std;

string keyFormatting(string s,int k){


    string result = "";
    int counter = 0;

    for(int i = s.length()-1;i >= 0;i--){
        if(s[i] != '-'){

            if(counter == k){
                result += '-';
                counter = 0;
            }

            counter++;
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] += 'A'- 'a';
            }

            result += s[i];
        }
    }

    reverse(result.begin(),result.end());
    return result;
}

int main(){
    string str = "5F3Z-2e-9-w";
    cout<<keyFormatting(str,4);
}