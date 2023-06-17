// https://youtu.be/LmHWIsBQBU4

#include<bits/stdc++.h>
using namespace std;

// backtracking return word
class Solution{
    public :


        void wordBreak(string str,string ans,unordered_set<string> dict){

            if(str.length() == 0){
                cout<<ans<<endl;
                return ;
            }


            for(int i = 0;i < str.length();i++){
                string left = str.substr(0,i+1);
                if(dict.find(left) != dict.end()){
                    string right = str.substr(i+1);
                    wordBreak(right,ans+left+" ",dict);
                }
            }
        }
};

int main(){

    unordered_set<string> dict = {"i","like","pep","coding","pepper","eating","mango","man","go","in","pepcoding"};
    string str = "ilikepeppereatingmangoinpepcoding";


    Solution s;
    s.wordBreak(str,"",dict);
}


// backtracking return true/false
class Solution {
private:
    bool wordBreak(string s, unordered_set<string> &set){
        if(s.size() == 0){
            return true;
        }
        for(int i=0; i<s.size(); i++){
            if(set.count(s.substr(0, i+1)) && wordBreak(s.substr(i+1), set)){
                return true;
            }
        }
        return false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> set(wordDict.begin(), wordDict.end());
        return wordBreak(s, set);
    }
};



// Top Down w/index
class Solution {
 public:
  bool wordBreak(string s, vector<string>& wordDict) {
    return wordBreak(s, 0, {wordDict.begin(), wordDict.end()},
                     vector<int>(s.length(), -1));
  }

 private:
  // Returns true if s[i:] can be segmented.
  bool wordBreak(const string& s, int i, const unordered_set<string>&& wordSet,
                 vector<int>&& memo) {
    if (i == s.length())
      return true;
    if (memo[i] != -1)
      return memo[i];

    for (int j = i + 1; j <= s.length(); ++j)
      if (wordSet.count(s.substr(i, j - i)) &&
          wordBreak(s, j, move(wordSet), move(memo)))
        return memo[i] = 1;

    return memo[i] = 0;
  }
};


// top down w/raw stirng

class Solution {
 public:
  bool wordBreak(string s, vector<string>& wordDict) {
    return wordBreak(s, {wordDict.begin(), wordDict.end()}, {});
  }

 private:
  bool wordBreak(const string& s, const unordered_set<string>&& wordSet,
                 unordered_map<string, bool>&& memo) {
    if (wordSet.count(s))
      return true;
    if (const auto it = memo.find(s); it != memo.cend())
      return it->second;

    // 1 <= prefix.length() < s.length()
    for (int i = 1; i < s.length(); ++i) {
      const string& prefix = s.substr(0, i);
      const string& suffix = s.substr(i);
      if (wordSet.count(prefix) && wordBreak(suffix, move(wordSet), move(memo)))
        return memo[s] = true;
    }

    return memo[s] = false;
  }
};
