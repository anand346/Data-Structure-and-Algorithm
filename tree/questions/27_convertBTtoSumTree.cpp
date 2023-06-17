#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    int helper(Node* node){
        
        if(node == nullptr){
            return 0;
        }
        
        int left = helper(node->left);
        int right = helper(node->right);
        
        int old = node->data;
        node->data = left+right;
        
        return node->data + old;
        
    }
    void toSumTree(Node *node)
    {
        // Your code here
        helper(node);
        
        
    }
};


// check if BT is sum tree or not

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    int sum(Node* node){
        
        if(node == nullptr){
            return 0;
        }
        
        int left = sum(node->left);
        int right = sum(node->right);
        
        return node->data + left + right;
        
    }
    void checkSumTree(Node *node)
    {
        // Your code here
        if(node == NULL || (node->left == NULL && node->right == NULL)){
            return true;
        }

        int left = sum(node->left);
        int right = sum(node->right);

        return (node == (left+right)) && checkSumTree(node->left) && checkSumTree(node->right);
        
        
    }
};

int main(){

}