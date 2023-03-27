#include<bits/stdc++.h>
using namespace std;


class Trie{
    public :
        int count ;
        string key;
        unordered_map<char,Trie*> child;
};


class Node{
    string key;
    int count;
}

struct comp{
    bool operator()(const Node &lhs,const Node &rhs) const {
        return lhs.count < rhs.count;
    }
};

Trie* getNewTrieNode(){
    Trie* node = new Trie();
    node->count = 0;

    return node;
}

void insert(Trie* &head,string str){
    Trie* curr = head;

    for(char ch : str){
        if(curr->child.find(ch) == curr->child.end()){
            curr->child[ch] = getNewTrieNode() ;
        }

        curr = curr->child[ch];
    }

    curr->key = str;
    curr->count += 1;
}

bool preorder(Trie* curr, auto &pq)
{
    // base condition
    if (curr == NULL) {
        return false;
    }
 
    for (auto it: curr->child)
    {
        if (it.second->count) {
            pq.push({ it.second->key, it.second->count });
        }
        preorder(it.second, pq);
    }
}
void findKfrequentWords(string dict[], int n, int k)
{
    Trie* head = getNewTrieNode();
    for (int i = 0; i < n; i++) {
        insert(head, dict[i]);
    }
 
    // create an empty max-heap
    priority_queue<Node, vector<Node>, comp> pq;
 
    // perform preorder traversal on given Trie and push each
    // unique key with its frequency in max-heap
    preorder(head, pq);
 
    // run till max-heap becomes empty or `k` keys are printed
    while (k-- && !pq.empty())
    {
        // extract the maximum node from the max-heap
        Node max = pq.top();
        pq.pop();
 
        // print the maximum occurring element with its count
        cout << max.key << " occurs " << max.count << " times\n";
    }
}
int main(){

}
