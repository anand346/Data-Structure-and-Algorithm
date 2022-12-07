#include<bits/stdc++.h>
using namespace std;

string findSum(string x, string y) {

    if(x.length() > y.length()){
        swap(x,y);
    }

    int n1 = x.length();
    int n2 = y.length();

    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());

    string ans = "";    
    int carry = 0;
    for(int i = 0;i < n1;i++){

        int sum = (x[i]-'0')+(y[i]-'0')+carry;
        ans.push_back(sum%10+'0');

        carry = sum/10;
    }
    for(int i = n1;i < n2;i++){
        int sum = (y[i]-'0')+carry;
        ans.push_back(sum%10+'0');
        carry = sum/10;
    }
    if(carry){
        ans.push_back(carry+'0');
    }

    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string str1 = "12";
    string str2 = "198111";
    cout << findSum(str1, str2);
    return 0;
}