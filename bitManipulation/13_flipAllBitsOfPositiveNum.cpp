#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int bits = floor(log2(n)+1);
    cout<<"total bits : "<<bits<<endl;
    int m = 1<<(bits-1);
    m = m | m-1;
    cout<<(n^m)<<endl;
}

// 10 -> 1010
// 10 is using 4 bits , now we have to XOR 10 with that num whose all 4 bits are 1.
// (1<<(4-1)) = 8
// 8 = 1000
// 8-1 = 7 -> 0111
// 8|7 = 15 -> 1111 // 15 having all 4 bits as 1.
// 10^15 = 5
// 5  -> 0101 // 5 is flipped version of 10.