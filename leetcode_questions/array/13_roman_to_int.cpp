#include<bits/stdc++.h>
using namespace std;
int romanToInt(string s){
    int ans = 0;
    unordered_map<char,int> nums = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    for(int i = 0;i < s.length();i++){
        if(i == 0 || nums[s[i]] <= nums[s[i-1]]){
            ans += nums[s[i]];
        }else{
            ans += nums[s[i]]-2*nums[s[i-1]];
        }
    }
    return ans;
}
int main(){
    int ans = romanToInt("MMXCVI");
    cout<<ans;
}