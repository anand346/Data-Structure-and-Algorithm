#include<bits/stdc++.h>
using namespace std;


string multiplyStrings(string s1, string s2){

    if(s1 == "0" || s2 == "0") return 0;

    int n1 = s1.size();
    int n2 = s2.size();

    vector<int> num(n1+n2,0);

    for(int i = s1.length()-1;i >= 0;i--){
        for(int j = s2.length()-1;j >=0;j--){

            int sum = (s1[i]-'0')*(s2[j]-'0');
            num[i+j+1] += sum;
            num[i+j] += num[i+j+1]/10;
            num[i+j+1] %= 10;

        }
    }

    int i = 0;
    string ans = "";
    while(num[i] == 0) i++;

    while(i < num.size()) ans += to_string(num[i++]);

    return ans;
}
int main(){
    string s1 = "11";
    string s2 = "23";

    cout<<multiplyStrings(s1,s2);
}