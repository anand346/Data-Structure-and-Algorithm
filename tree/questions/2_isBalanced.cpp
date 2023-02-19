// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1
// https://www.geeksforgeeks.org/how-to-determine-if-a-binary-tree-is-balanced/

#include<bits/stdc++.h>
using namespace std;

int height(Node* root){
        
    if(root == NULL) return 0;
    
    return max(height(root->left),height(root->right))+1;
}
bool isBalanced(Node *root)
{
    //  Your Code here
    
    if(root == NULL) return 1;
    
    int lh = height(root->left);
    int rh = height(root->right);
    
    if(abs(lh-rh) <= 1 && isBalanced(root->left) && isBalanced(root->right)){
        return 1;
    }
    
    return 0;
}