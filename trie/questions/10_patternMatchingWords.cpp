#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public :
        unordered_map<char,TriNode*> map;
        bool isLeaf = false;
        unordered_set<string> words;
}

void insert(TrieNode*& head, string word)
{
    if (head == nullptr) {
        head = new TrieNode();
    }
 
    // start from the head node
    TrieNode* curr = head;
    for (char c: word)
    {
        // insert only uppercase characters
        if (isupper(c))
        {
            // create a new node if the path doesn't exist
            if (curr->map.find(c) == curr->map.end()) {
                curr->map[c] = new TrieNode();
            }
 
            // go to the next node
            curr = curr->map[c];
        }
    }
 
    // mark the current node as a leaf
    curr->isLeaf = true;
 
    // push the current word into the set associated with a leaf node
    (curr->word).insert(word);
}
void printAllWords(TrieNode* root)
{
    // if the current node is a leaf, print all words associated with it
    if (root->isLeaf)
    {
        unordered_set<string> collection = root->word;
        for (string s: collection) {
            cout << s << endl;
        }
    }
 
    // recur for all children of the root node
    for (auto pair: root->map)
    {
        TrieNode* child = pair.second;
        if (child) {
            printAllWords(child);
        }
    }
}
void findAllWords(vector<string> const &dictionary, string pattern)
{
    // base case
    if (dictionary.size() == 0) {
        return;
    }
 
    // Trie head node
    TrieNode* head = nullptr;
 
    // construct a Trie from the given dictionary
    for (string s: dictionary) {
        insert(head, s);
    }
 
    // search for the given pattern in the Trie
    TrieNode* curr = head;
    for (char c: pattern)
    {
        // move to the child node
        curr = curr->map[c];
 
        // if the given pattern is not found (reached end of a path in the Trie)
        if (curr == nullptr) {
            return;
        }
    }
 
    // print all words matching the given pattern
    printAllWords(curr);
}
 
int main(){

}