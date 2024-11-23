// https://youtu.be/XtmW3a8Q9M4
// subsets : 2^n ; where n is no of elements in array ;
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solve(vector<string>& words,vector<int> &freq, vector<int>& score,int idx = 0){

        if(idx == words.size()){
            return 0;
        }

        int sno = 0 + solve(words,freq,score,idx+1);

        int sword = 0;
        string word = words[idx];
        bool flag = true;

        for(int i = 0;i < word.length();i++){
            char ch = word[i];

            if(freq[ch-'a'] == 0){
                flag = false;
            }
            freq[ch-'a']--;
            sword += score[ch-'a'];
            
        }

        int syes = 0;
        if(flag){
            syes = sword + solve(words,freq,score,idx+1);
        }

        for(int i = 0;i < word.length();i++){
            char ch = word[i];
            freq[ch - 'a']++;
        }

        return max(sno,syes);
    }

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int>freq(26,0);
        for(int i=0;i<letters.size();i++){
                freq[letters[i]-'a']++;
        }
        return solve(words,freq,score,0);
    }
};

int main(){
    
}