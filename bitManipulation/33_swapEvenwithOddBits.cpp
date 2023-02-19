// https://youtu.be/GWLCF808oVI

#include<bits/stdc++.h>
using namespace std;


int swapEvenOddBits(int x){
    unsigned int even_bits = ((0xaaaaaaaa)&x)>>1 ;
    unsigned int odd_bits  = ((0x55555555)&x)<<1 ;
    
    return even_bits | odd_bits ;

}

int main(){

    cout<<swapEvenOddBits(10);
}

