// https://www.youtube.com/watch?v=mt_x9grlEm0&list=PLLT4EuYB4kIZGBE71Udl0m68uFxRiMhGS&index=8

#include<bits/stdc++.h>
using namespace std;

int findPosition(int n){
    if(n == 0) return -1;
    if((n&n-1) == 0) return ceil(log2(n)+1);
    return -1;

}

int main(){

    int n = 32;
    cout<<findPosition(n);


}