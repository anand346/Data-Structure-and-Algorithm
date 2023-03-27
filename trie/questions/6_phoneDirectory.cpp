#include<bits/stdc++.h>
using namespace std;


class TrieNode{
    public :
        unordered_map<char,TrieNode*> child;
        bool isTerminal;
        TrieNode(){
            for(char i = 'a';i <= 'z';i++){
                child[i] = NULL;
            }
            isTerminal = false;
        }
};
class Trie{
    public :
        TrieNode *root;
        Trie(){
            root = new TrieNode();
        }   

        void insert(string s){
            int len = s.length();
            TrieNode *itr = root;

            for(int i = 0;i < len;i++){
                TrieNode *nextNode = itr->child[s[i]];

                if(nextNode == NULL){
                    nextNode = new TrieNode();
                    itr->child[s[i]] = nextNode;
                }

                itr = nextNode;

                if(len-1 == i){
                    itr->isTerminal = true;
                }
            }
        }  

        void displayContactUtil(TrieNode *currNode , string prefix,vector<string> &contactsWithPrefix){
            if(currNode->isTerminal){
                contactsWithPrefix.push_back(prefix);
                return ;
            }

            for(char i = 'a';i <= 'z';i++){
                TrieNode *nextNode = currNode->child[i];

                if(nextNode != NULL){
                    displayContactUtil(nextNode,prefix+i,contactsWithPrefix);
                }
            }
        }

        void getContacts(string str,unordered_map<string,int> phonebook){
            TrieNode *prevNode = root;
            string prefix = "";
            int len = str.length();

            int i ;
            for(i = 0;i < len;i++){
                prefix += str[i];

                char lastChar = prefix[i];
                TrieNode *currNode = prevNode->child[lastChar] ;

                if(currNode == NULL){
                    i++;
                    break;
                }

                vector<string> contactsWithPrefix ;

                displayContactUtil(currNode,prefix,contactsWithPrefix);
                for(auto el : contactsWithPrefix){
                    cout<<"contact name : "<<el<<" phone is : "<<phonebook[el]<<endl;
                }

                prevNode = currNode;
            }
        }
};

class PhoneBookDirectory{
    public :
        unordered_map<string,int> phonebook;
        Trie trie;

        PhoneBookDirectory(){
            
        }
        void addContact(string name,int phoneno){
            phonebook[name] = phoneno;
            trie.insert(name);
        }

        void searchAndShowNoForAllCombination(string query){
            trie.getContacts(query,phonebook);
        }
};



int main(){
    PhoneBookDirectory ph ;

    ph.addContact("gforgeeks",1234);
    ph.addContact("geeksquiz",4567);
    ph.addContact("Ricky", 134242444);
    ph.addContact("Peter",224323423);
    ph.addContact("Ron", 988232323);
    string query = "Ricky";
    ph.searchAndShowNoForAllCombination(query);
}