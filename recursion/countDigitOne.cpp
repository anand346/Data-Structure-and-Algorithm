#include<bits/stdc++.h>
using namespace std;


int countDigitOne(int n) {
    if(n<1) return 0;
    if(n>=1 && n<10) return 1;
    // x: first digit
    int y=1, x=n;
    while(!(x<10)){
        x/=10;
        y*=10;
    }
    if(x==1)
        return n-y+1+countDigitOne(y-1)+countDigitOne(n%y);
    else
        return y+x*countDigitOne(y-1)+countDigitOne(n%y);
}

class Solution {
 public:
  int countDigitOne(int n) {
    int ans = 0;

    for (long pow10 = 1; pow10 <= n; pow10 *= 10) {
      const long divisor = pow10 * 10;
      const int quotient = n / divisor;
      const int remainder = n % divisor;
      if (quotient > 0)
        ans += quotient * pow10;
      if (remainder >= pow10)
        ans += min(remainder - pow10 + 1, pow10);
    }

    return ans;
  }
};


int main(){
    cout<<countDigitOne(12);

}