// https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    bool isleaf(Node* root){
        return root->left == NULL && root->right == NULL;
    }
    
    void printLeftBoundary(Node* root,vector<int> &ans){
        
        if(root == NULL){
            return ;
        }
        
        Node* temp = root;
        while(!isleaf(temp)){
            
            ans.push_back(temp->data);
            temp = temp->left ? temp->left : temp->right;
        }
    }
    
    void printLeafNodes(Node* root,vector<int> &ans){
        if(root == NULL){
            return ;
        }
        
        printLeafNodes(root->left,ans);
        
        if(isleaf(root)){
            ans.push_back(root->data);
        }
        printLeafNodes(root->right,ans);
    }
    
    void printRightBoundary(Node* root,vector<int> &ans){
        if(root == NULL || isleaf(root)){
            return ;
        }
        
        printRightBoundary(root->right ? root->right : root->left,ans);
        
        ans.push_back(root->data);
        
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        
        vector<int> ans;
        if(root == NULL){
            return {};
        }
        ans.push_back(root->data);
        printLeftBoundary(root->left,ans);
        if(!isleaf(root)){
            printLeafNodes(root,ans);
        }
        printRightBoundary(root->right,ans);
    
        return ans;
    }
};

int main(){


}