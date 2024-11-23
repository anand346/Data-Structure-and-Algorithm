// https://www.youtube.com/watch?v=CdKunEN4K3Q

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :
        struct TrieNode{
            unordered_map<char,TrieNode*> child;
            bool isTerminal;

            TrieNode(){
                for(char i = 'a';i <= 'z';i++){
                    child[i] = NULL;
                }
                isTerminal = false;
            }
        };

        TrieNode* root = NULL;

        void insert(string s){
            int len = s.length();
            TrieNode* itr = root;

            for(int i = 0;i < len;i++){
                TrieNode* nextNode = itr->child[s[i]];
                if(nextNode == NULL){
                    nextNode = new TrieNode();
                    itr->child[s[i]] = nextNode;
                }
                itr = nextNode;
            
                if(i == len-1){
                    itr->isTerminal = true;        
                }
            }

        }

        void insertIntoTrie(vector<string> &words){
            root = new TrieNode();
            for(int i = 0;i < words.length();i++){
                insert(words[i]);
            }
        }

        void displayContactUtil(TrieNode* currNode,string prefix,vector<string> &vec){
            if(currNode->isTerminal){
                vec.push_back(prefix);
            }

            for(char i = 'a';i <= 'z';i++){
                TrieNode* nextNode = currNode->child[i];
                if(nextNode != NULL){
                    displayContactUtil(nextNode,prefix+(char)i,vec);
                }
            }
        }


        vector<vector<string>> phoneDirectory(vector<strig>& contactList,string &queryStr){
            
            insertIntoTrie(contactList);
            TrieNode* prevNode = root;
            vector<vector<string>> res;
            string prefix = "";
            int len = queryStr.length();
            int i ;
            for(int i = 0;i < len;i++){
                vector<string> v;
                prefix += (char)queryStr[i];
                char lastChar = prefix[i];
                TrieNode* currNode = prevNode->child[lastChar];
                if(currNode == NULL){
                    v.push_back("0");
                    res.push_back(v);
                    i++;
                    break;
                }

                displayContactUtil(currNode,prefix,v);
                prevNode = currNode;
                res.push_back(v);
            }

            for(;i < len;i++){
                vector<string> v;
                v.push_back("0");
                res.push_back(v);
            }

            return res;
        }

};