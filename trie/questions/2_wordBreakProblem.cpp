#include<bits/stdc++.h>
using namespace std;


// using recursion

int check(string var) 
{ 
    string array[] = {"mobile","microwave","television","refrigerator","mob","vision","wave","i","use","ac","fridge"}; 
    int size = sizeof(array)/sizeof(array[0]); 
    for (int j = 0; j < size; j++) 
        if (array[j].compare(var) == 0) 
           return true; 
    return false; 
} 
bool divide(string ch) 
{ 
    int size = ch.size(); 
    if (size == 0)  
        return true; 
    for (int i=1; i<=size;i++) 
    { 
        if (check(ch.substr(0,i)) && divide(ch.substr(i,size-i))) 
            return true; 
    } 
    return false; 
} 
int main() 
{ 
    string ch;
    cout<<"enter string\n";
    cin>>ch;
    if(divide(ch))
        cout<<"yes";
    else
        cout<<"no";
    return 0; 
}


// using trie

class TrieNode{
    public :
        TrieNode *child[26];
        bool isTerminal;
};

TrieNode* getNode(){
    TrieNode* root = new TrieNode();
    root->isTerminal = false;
    for(int i = 0;i < 25;i++){
        root->child[i] = NULL;
    }
    return root;
}

class Solution
{
public:
    void add(TrieNode *root, string s){
        TrieNode* curr = root;

        for(int i = 0;i < s.length();i++){
            if(curr->child[s[i]-'a'] == NULL){
                curr->child[s[i]-'a'] = getNode();
            }

            curr = curr->child[s[i]-'a'];
        }

        curr->isTerminal = true;

    }

    bool search(TrieNode* root,string s){
        TrieNode* curr = root;

        for(int i = 0;i < s.length();i++){
            if(curr->child[s[i]-'a'] == NULL){
                return false;
            }

            curr = curr->child[s[i]-'a'];
        }

        return curr != NULL && curr->isTerminal;
    }

    bool wordcheck(TrieNode* root,string s){
        if(s.length()==0) return true;
    
        for(int i=1;i<=s.length();i++){
            if(search(root,s.substr(0,i)) && wordcheck(root,s.substr(i,s.length()-i)))
                return true;
        }
        return false;
    }
    int wordBreak(string word, vector<string> &words) {
        //code here
        TrieNode* root = getNode();
        for(int i = 0;i < words.size();i++){
            add(root,words[i]);
        }

        if(wordcheck(root,word)){
            return 1;
        }
        return 0;
    }
};

int main(){


}