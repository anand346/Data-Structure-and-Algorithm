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

    return curr->isTerminal = true;
}


int main(){
    bool mat[M][N] =
    {
        {1, 0, 0, 1, 0},
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {0, 0, 1, 1, 0},
        {0, 1, 1, 0, 0}
    };
 
    // insert all rows of the matrix into a Trie
    Trie* head = getNewTrieNode();
    for (int i = 0; i < M; i++)
    {
        if (!insert(head, mat[i])) {
            cout << "Duplicate row found: Row #" << i + 1 << endl;
        }
    }
 
    return 0;
}