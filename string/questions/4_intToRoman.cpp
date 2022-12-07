#include<bits/stdc++.h>
using namespace std;

string intToRoman(int inp){
    string code[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int intCode[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};


    int size = sizeof(code)/sizeof(code[0]);
    string result = "";
    for(int i = 0;i < size;i++){
        while(inp >= intCode[i]){
            result += code[i];
            inp -= intCode[i];
        }
    }
    return result;
}
int main(){
    int inp = 564;
    string out = intToRoman(inp);
    cout<<out;
}