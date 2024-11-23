#include<bits/stdc++.h>
using namespace std;

char nthCharacter(string S, int R, int N) {
        //code here
    // string res = "";
    // string temp = S;

    // for(int i = 0;i < R;i++){
    //     res = "";
    //     for(int j = 0;j < temp.length();j++){
    //         if(temp[j] == '1'){
    //             res += '1';
    //             res += '0';
    //         }else{
    //             res += '0';
    //             res += '1';
    //         }    
    //     }
    //     temp = res;
    // }
    
    // return res[N];

     int count = 0;
        for(int i = 0; i < R; i++)
        {
            if(N%2)
                count++;
            N /= 2;
        }
        cout<<count<<endl;
        if(count%2)
        {
            if(S[N] == '0')
                return '1';
            return '0';
        }
        return S[N];
}

int main(){
    string S = "101";
    int R = 2 ;
    int N = 3;

    cout<<nthCharacter(S,R,N);
}