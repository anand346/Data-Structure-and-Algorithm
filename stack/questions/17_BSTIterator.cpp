// https://www.youtube.com/watch?v=ej9z2K7NvI8


#include<bits/stdc++.h>
using namespace std;

class BSTIterator {
public:
    stack<TreeNode*> st;

    void inorder(TreeNode* root){
        if(root == NULL){
            return ;
        }
        st.push(root);
        while(root->left){
            st.push(root->left);
            root = root->left;
        }
        
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        TreeNode* topOne = st.top();
        st.pop();
        if(topOne->right){
            inorder(topOne->right);
        }
        return topOne->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};