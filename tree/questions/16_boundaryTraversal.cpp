// https://www.youtube.com/watch?v=bzF9Ia1XISQ
// https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

#include<bits/stdc++.h>
using namespace std;


void leftTree(Node* root, vector<int> &ans){

    if(!root) return ;
    if(root->left){
        ans.push_back(root->data);
        leftTree(root->left,ans);
    }else if(root->right){
        ans.push_back(root->data);
        leftTree(root->right,ans);
    }
}

void leaf(Node* root,vector<int> &ans){
    if(!root) return ;
    leaf(root->left,ans);
    if(!root->left and !root->right) ans.push_back(root->data);
    leaf(root->right,ans);
}

void rightTree(Node* root , vector<int> &ans){

    if(!root) return ;
    if(root->right){
        rightTree(root->right,ans);
        ans.push_back(root->data);
    }else if(root->left){
        rightTree(root->left, ans);
        ans.push_back(root->data);
    }
}


vector<int> printBoundary(Node* root){
    vector<int> ans;

    ans.push_back(root->data);
    leftTree(root->left,ans);
    leaf(root,ans);
    rightTree(root->right,ans);
    return ans;
}