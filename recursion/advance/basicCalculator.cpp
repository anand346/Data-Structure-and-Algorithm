#include<bits/stdc++.h>
using namespace std;


int helper(string str,int ind = 0){

    int res = 0;
    int sign = 1;
    int number = 0; 

    for(;ind < str.size();ind++){

        char x = str[ind];

        if(x == ' '){
            continue;
        }else if(x == '+' || x == '-'){
            res += sign*(number);
            number = 0;
            sign = (x=='+' ? 1 : -1);
        }else if(x == '(' ){
            res += sign*helper(str,++ind);
        }else if(x == ')'){
            break;
        }else{
            number = number*10+(x-'0');
        }   

    }
    return res+sign*(number);

    
}

int calculator(string str){
    int index = 0;
    int res = helper(str,index);
    return res;
}

int main(){


}