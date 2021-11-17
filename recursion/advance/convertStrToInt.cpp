#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int convertStrToInt(char str[],int n){
    if(n == 0){
        return 0;
    }
    int small = convertStrToInt(str,n-1);
    int lastDigit = str[n-1] - '0';
    return small*10 + lastDigit;
}
int main(){
    char str[] = "12345";
    int n = strlen(str);
    // int n = sizeof(str)/sizeof(str[0]);
    int result = convertStrToInt(str,n);
    cout<<result<<endl;
}