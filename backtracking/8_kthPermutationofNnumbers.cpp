// https://www.youtube.com/watch?v=W9SIlE2jhBQ

#include<bits/stdc++.h>
using namespace std;

class Solution{
    vector<int> fact,digit;
    public :


        void solve(string &ans,int n,int k){
            if(n == 1){
                ans += to_string(digit.back());
                return ;
            }

            int index = k/fact[n-1];
            if(k%fact[n-1] == 0){
                index -= 1;
            }

            ans += to_string(digit[index]);
            digit.erase(digit.begin()+index);
            
            k -= fact[n-1]*index;
            solve(ans,n-1,k);
        }

        string getPermutation(int n,int k){
            fact.push_back(1);
            int f = 1;
            for(int i = 1;i < n;i++){
                f *= i;
                fact.push_back(f);
            }

            for(int i = 1;i <= n;i++){
                digit.push_back(i);
            }

            string ans = "";
            solve(ans,n,k);
            return ans;
        }
};


int main(){
    int n = 4;
    int k = 14;
    Solution s;
    cout<<s.getPermutation(n,k);

}



class Solution {
public:
    void recur(string s, string temp, vector<bool> &vis, vector<string> &ans, int &cnt, int k){
      if(temp.size() == s.size()){
        ans.emplace_back(temp);
        cnt++;
        if(cnt == k) return;
      }
      for(int i = 0; i < s.size(); i++){
        if(!vis[i]){
          vis[i] = true;
          temp += s[i];
          recur(s, temp, vis, ans, cnt, k);
          temp.pop_back();
          vis[i] = false;
        }
        if(cnt == k) return;
      }
    }
    string getPermutation(int n, int k) {
      vector<string> ans;
      string s = "", temp = "";
      for(int i = 1; i < n + 1; i++)
        s += to_string(i);
      vector<bool> vis(n, false);
      int cnt = 0;
      recur(s, temp, vis, ans, cnt, k);
      return ans.back();
    }
};