#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int convertStr(char input[],int n){
    if(n == 0){
        return 0;
    }    
    int small = convertStr(input,n-1);
    int firstDigit = input[n-1] - '0';
    return small*10 + firstDigit;
}
int main(){
    char input[] = "20201";
    cout<<convertStr(input,5);
}