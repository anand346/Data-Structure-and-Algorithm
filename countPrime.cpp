#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    vector<int> passed(n,false);
    int count = 0;
    for(int num = 2;num < n;num++){
        if(passed[num]){
            continue;
        }
        count++;
        for(long long mult = (long)num*num;mult < n;mult += num){
            passed[mult] = true;
        }
    }
    return count;
}

int main(){
    cout<<countPrimes(20);
}