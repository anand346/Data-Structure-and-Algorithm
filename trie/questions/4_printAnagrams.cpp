#include<bits/stdc++.h>
using namespace std;


class TrieNode{
    public :
        map<char,TrieNode*> child;
        string words;
};
void insert(TrieNode* root,string word,string originalWord){
    TrieNode* curr = root;
    for(char c : word){
        if(curr->child.find(c) == curr->child.end()){
            curr->child[c] = new TrieNode();
        }

        curr = curr->child[c];
    }

    curr->words += originalWord + ' ';
}

void printAnagrams(TrieNode* root){
    if(root == nullptr){
        return ;
    }

    if(root->words.length() > 1){
        cout<<root->words<<endl;
    }

    for(auto &child : root->child){
        printAnagrams(child.second);
    }
}


void groupAnagrams(vector<string> &words){
    TrieNode* root = new TrieNode();
    for(string word : words){
        string sorted = word;
        sort(sorted.begin(),sorted.end());
        insert(root,sorted,word);
    }

    printAnagrams(root);
}
int main(){
    vector<string> words = {
        "auctioned", "actors", "altered", "streaming", "related",
        "education", "aspired", "costar", "despair", "mastering"
    };
 
    groupAnagrams(words);
 
    return 0;
}