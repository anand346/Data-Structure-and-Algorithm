// https://www.youtube.com/watch?v=k9hAPHAZP7U
// https://practice.geeksforgeeks.org/problems/game-with-string4100/1
#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :

        string firstNonRepeating(string s){
            int flag[26] = {0};
            deque<char> dq;
            string ans;
            for(int i = 0;i < s.size();i++){
                dq.push_back(s[i]);
                flag[s[i]-'a']++;
                while(!dq.empty() and flag[dq.front()-'a'] != 1){
                    dq.pop_front();
                }
                if(dq.empty()){
                    ans += "#";
                }else{
                    ans += dq.front();
                }
            }
            return ans;
        }
        

}


int main(){
    ex : "aabc"; // a#bb
}