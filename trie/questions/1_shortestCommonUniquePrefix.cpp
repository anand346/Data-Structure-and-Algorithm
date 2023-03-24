#include<bits/stdc++.h>
using namespace std;

class Trie{
    public :
        Trie* child[26];
        bool isTerminal;
        int freq;


        Trie(){
            isTerminal = false;
            freq = 0;
            for(int i = 0;i < 26;i++){
                child[i] = NULL;
            }
        }
}

class Solution{

    public :
        Trie *root = new Trie();

        void buildTrie(string word,Trie *root){
            Trie* curr = root;
            for(int i = 0;i < word.length();i++){
                if(curr->child[word[i]-'a'] == NULL){
                    curr->child[word[i]-'a']->freq++;
                    curr->child[word[i]-'a'] = new Trie();
                    curr = curr->child[word[i]-'a'];
                }
            }
        }

        string buildPrefix(string word,Trie* root){
            Trie* curr = root;
            string ans = "";
            for(int i = 0;i < word.length();i++){
                if(curr->freq == 1) break;
                ans += word[i];
                curr = curr->child[word[i]-'a'];
            }
            return ans;
        }
        vector<string> findPrefixes(vector<string> words){


            vector<string> ans;
            int n = words.size();
            for(int i = 0;i < n;i++){
                buildTrie(words[i],root);
            }

            for(int i = 0;i < n;i++){
                ans.push_back(buildPrefix(words[i],root));
            }
            return ans;
        }
}

// time complexity : O(N*length of each word)
// space complexity : O(N*length of each word)

int main(){


}