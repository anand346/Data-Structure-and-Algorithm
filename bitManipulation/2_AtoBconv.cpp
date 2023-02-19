#include<bits/stdc++.h>
using namespace std;


int getValue(int a,int b){
    int res = 1;
    while(a && b){
        if(a&1 == 1){
            if(b&1 == 1){
                res = res*2;
            }else{
                return 0;
            }
        }

        a = a >> 1;
        b = b >> 1;
    }

    return res;
}

int main(){
    int a = 2 , b = 3;
    cout<<getValue(a,b);

}