#include<bits/stdc++.h>
using namespace std;

string nextPalin(string N) {

    string s = N.substr(0,N.size()/2);

    if(!next_permutation(s.begin(),s.end())) return "-1";

    string st = s;
    reverse(st.begin(),st.end());

    if(N.size()%2 == 1) s += N[N.size()/2];

    return s+st;
}


int main(){
    string N = "35453";
    cout<<nextPalin(N);

}