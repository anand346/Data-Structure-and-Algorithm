#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    TreeNode* rightMost(TreeNode* root){
        if(!root->right) return root;
        return rightMost(root->right);
    }
    void flatten(TreeNode* root) {
        
        if(root == NULL) return ;

        TreeNode* rightMOST;
        TreeNode* nextRight;
        while(root){

            if(root->left){
                rightMOST = rightMost(root->left);
                nextRight = root->right;
                root->right = root->left;
                root->left = NULL;
                rightMOST->right = nextRight;
            }
            root = root->right;
        }
    }
};

int main(){

}