#include<bits/stdc++.h>
using namespace std;

int MYatoi(string str){
    

    if(str.length() == 0){
        return 0;
    }

    if(str.length() == 1){
        if(isdigit(str[0])){
            return str[0] - '0';
        }else{
            return 0;
        }
    }

    int startIndex = str.find_first_not_of(" ");

    if(startIndex == -1){
        return 0;
    }
    
    bool isNegative = false;
    double result = 0;

    if(str[0] == '-' || str[0] == '+'){
        ++startIndex;
    }
    if(str[0] == '-'){
        isNegative = true;
    }

    for(int i = startIndex;i < str.length();i++){
        if(str[i] < '0' || str[i] > '9'){
            break;
        }
        int digitValue = str[i] - '0';
        result = result*10 + digitValue;
    }

    if(isNegative){
        result = -result;
    }

    if(result < INT_MIN){
        return INT_MIN;
    }
    if(result > INT_MAX){
        return INT_MAX;
    }

    return result;
}
int main(){
    string str = "-234";
    cout<<MYatoi(str)-4;

}