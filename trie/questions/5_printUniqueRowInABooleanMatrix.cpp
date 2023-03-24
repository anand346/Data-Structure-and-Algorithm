// this is the program to find duplicate rows in binary matrix


#include<bits/stdc++.h>
using namespace std;
#define M 5; // row of matrix
#define N 5; // column of matrix


class Trie{
    public :
        bool isTerminal;
        Trie* child[2];

};

Trie* getNewNode(){
    Trie *node = new Trie();
    
    node->child[0] = node->child[1] = NULL;
    node->isTerminal = false;

    return node;
}

bool insert(Trie*& head,bool *arr){
    Trie* curr = head;

    for(int i = 0;i < N;i++){
        if(curr->child[arr[i]] == NULL){
            curr->child[arr[i]] = getNewNode();
        }

        curr = curr->child[arr[i]];
    }

    if(curr->isTerminal){
        return false;
    }

    return curr->isTerminal;
}


int main(){

}