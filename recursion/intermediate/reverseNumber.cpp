#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n){

    int reverse = 0;
    int remainder = 0;

    do{
        remainder = n%10;
        reverse = reverse*10+remainder;
        n = n/10;
    }while(n > 0);

    return reverse;
    
}



int main(){
    cout<<reverseNumber(73283);
}