#include<bits/stdc++.h>
using namespace std; 

string addBinary(string a, string b){

    if(a.length() > b.length()){
        return addBinary(b,a);
    }

    string padding = "";
    int diff = b.length() - a.length();

    for(int i = 0;i < diff;i++){
        padding.push_back('0');
    }
    
    a = padding + a;
    char carry = '0';
    string result = "";

    for(int i = a.length()-1;i >= 0;i--){

        if(a[i] == '1' && b[i] == '1'){
            if(carry == '1'){
                result.push_back('1'), carry = '1';
            }else{
                result.push_back('0') , carry = '1';
            }
        }else if(a[i] == '0' && b[i] == '0'){
            if(carry == '1'){
                result.push_back('1') , carry = '0';
            }else{
                result.push_back('0'), carry = '0';
            }
        }else{
            if(carry == '1'){
                result.push_back('0') , carry = '1';
            }else{
                result.push_back('1') , carry = '0';
            }
        }
    }

    if(carry == '1') result.push_back('1');
    reverse(result.begin(),result.end());

    int index = 0;
    while(index + 1 < result.length() && result[index] == '0'){
        index++;
    }
    return (result.substr(index));
}

int main(){
    string A = "1101", B = "111";
    cout<<addBinary(A,B);
}