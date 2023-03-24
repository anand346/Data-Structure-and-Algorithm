#include<bits/stdc++.h>
using namespace std;


class Trie{
    public :
        char data;
        Trie *child[26];
        bool isTerminal;

        Trie(char ch){
            data = ch;
            for(int i = 0;i < 26;i++){
                child[i] == NULL;
            }
            isTerminal = false;
        }
}

class Solution{
    public :
        
        void add(Trie* root,string word){
            Trie* curr = root;
            for(int i = 0;i < 26;i++){
                int index = word[i]-'a';
                if(curr->child[index] == NULL){
                    curr->child[index]->data = ch;
                    curr->child[index] = new Trie();
                }
                curr = curr->child[index];
            }
            curr->isTerminal = true;
        }

        bool search(Trie*root , string word){
            Trie* curr = root;
            for(int i = 0;i < 26;i++){
                int index = word[i]-'a';
                if(curr->child[index] == NULL){
                    return false;
                }
                curr = curr->child[index];
            }
            return curr->isTerminal;
        }

        void wordBreakUtil(Trie* root,string word){
            if(word.length() == 0) return ;

            for(int i = 1;i < word.length();i++){
                if(search(root,word.substr(0,i)) && wordBreakUtil(root,word.substr(i,word.length()-1))){
                    return true;
                }
            }
            return false;
        }

        int wordBreak(string word,vector<string>& words){
            Trie* root = new Trie('\0');
            for(int i = 0;i < words.size();i++){
                add(root,words[i]);
            }

            if(wordBreakUtil(root,words[i])){
                return 1;
            }else{
                return 0;
            }
        }
}

int main(){


}