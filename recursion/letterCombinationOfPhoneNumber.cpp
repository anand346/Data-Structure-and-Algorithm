#include<bits/stdc++.h>
using namespace std;


class Solution {
private:
    void letterCombinations(string digits, vector<string>& output, string &temp, vector<string>& pad, int index){
        if(index == digits.size()){
            output.push_back(temp);
            return;
        }
        string value = pad[digits[index]-'0'];
        for(int i=0; i<value.size(); i++){
            temp.push_back(value[i]);
            letterCombinations(digits, output, temp, pad, i+1);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> output;
        string temp;
        letterCombinations(digits, output, temp, pad, 0);
        return output;
    }
};


// 2nd approach
class Solution {
 public:
  vector<string> letterCombinations(string digits) {
    if (digits.empty())
      return {};

    vector<string> ans;

    dfs(digits, 0, "", ans);
    return ans;
  }

 private:
  const vector<string> digitToLetters{"",    "",    "abc",  "def", "ghi",
                                      "jkl", "mno", "pqrs", "tuv", "wxyz"};

  void dfs(const string& digits, int i, string&& path, vector<string>& ans) {
    if (i == digits.length()) {
      ans.push_back(path);
      return;
    }

    for (const char letter : digitToLetters[digits[i] - '0']) {
      path.push_back(letter);
      dfs(digits, i + 1, move(path), ans);
      path.pop_back();
    }
  }
};

int main(){

}