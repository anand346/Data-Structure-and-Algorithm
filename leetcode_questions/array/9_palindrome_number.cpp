#include<iostream>
using namespace std;
bool isPalindrome(int x){
    int y = 0;
    int z = x;
    while(x != 0){
        y = y*10 + x%10;
        x = x/10;
    }
    return y == z;
}
int main(){
    cout<<isPalindrome(1222);
}