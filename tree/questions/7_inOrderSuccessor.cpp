// https://www.youtube.com/watch?v=SXKAD2svfmI
// https://practice.geeksforgeeks.org/problems/inorder-successor-in-bst/1

#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :
        Node * inOrderSuccessor(Node *root, Node *p)
        {
            //Your code here
            
            Node* successor = NULL;
            while(root != NULL){
                if(p->data >= root->data){
                    root = root->right;
                }else{
                    successor = root;
                    root = root->left;
                }
            }
            return successor;
        }
}