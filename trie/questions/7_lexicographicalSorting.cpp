#include<bits/stdc++.h>
using namespace std;

class Trie{
    public :
    string key; // set when the node is a leaf node
    Trie *child[26];

    Trie(){
        for(int i = 0;i < 26;i++){
            child[i] = NULL;
        }
    }
};


void insert(Trie* root,string key){
    Trie* curr = root;

    for(char ch : key){
        if(curr->child[ch-'a'] == NULL){
            curr->child[ch-'a'] = new Trie();
        }
        curr = curr->child[ch-'a'];
    }
    curr->key = key;
}

bool preorder(Trie* const curr){
        if(curr == NULL){
            return false;
        }

        for(int i = 0;i < 26;i++){
            if(curr->child[i] != NULL){
                if(curr->child[i]->key.length() > 0){
                    cout<<curr->child[i]->key<<endl;
                }

                preorder(curr->child[i]);
            }
        }
}

int main(){
    string dict[] =
    {
        "lexicographic", "sorting", "of", "a", "set", "of", "keys", "can",
        "be", "accomplished", "with", "a", "simple", "trie", "based",
        "algorithm", "we", "insert", "all", "keys", "in", "a", "trie",
        "output", "all", "keys", "in", "the", "trie", "by", "means", "of",
        "preorder", "traversal", "which", "results", "in", "output", "that",
        "is", "in", "lexicographically", "increasing", "order", "preorder",
        "traversal", "is", "a", "kind", "of", "depth", "first", "traversal"
    };
 
    Trie* head = new Trie();
 
    // insert all keys of a dictionary into a Trie
    for (string word: dict) {
        insert(head, word);
    }
 
    // print keys in lexicographic order
    preorder(head);
 
    return 0;
}