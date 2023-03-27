#include<bits/stdc++.h>
using namespace std;


class Trie{
    public :
        string key;
        int count =  0;

        unordered_map<char,Trie*> child;
};

void insert(Trie* const &head,string const &str){
    Trie* curr = head;

    for(char ch : str){
        if(curr->child.find(ch) == curr->child.end()){
            curr->child[ch] = new Trie();
        }

        curr = curr->child[ch];
    }

    curr->key = str;
    curr->count += 1;
}

void preorder(Trie* const curr,int &max_count,string &key){
    if(curr == NULL){
        return ;
    }

    for(auto pair : curr->child){
        if(max_count < pair.second->count){
            key = pair.second->key;
            max_count = pair.second->count;
        }

        preorder(pair.second,max_count,key);
    }
}

int main(){
    // given set of keys
    string words[] =
    {
        "code", "coder", "coding", "codable", "codec", "codecs", "coded",
        "codeless", "codec", "codecs", "codependence", "codex", "codify",
        "codependents", "codes", "code", "coder", "codesign", "codec",
        "codeveloper", "codrive", "codec", "codecs", "codiscovered"
    };
 
    // insert all keys into a Trie
    Trie* head = new Trie();
    for (string word: words) {
        insert(head, word);
    }
 
    int count = 0;
    string key;
 
    // perform preorder traversal on a Trie and find the key
    // with maximum frequency
    preorder(head, count, key);
 
    cout << "Word : " << key << endl;
    cout << "Count: " << count << endl;
 
    return 0;
}