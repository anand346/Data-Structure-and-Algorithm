#include<bits/stdc++.h>
using namespace std;


bool checkIdentical(Node* a, Node* b){

    if(a == NULL && b == NULL){
        return true;
    }

    return (a && b) && (a->data == b->data) && checkIdentical(a->left,b->left) && checkIdentical(a->right,b->right);
}

// check if tree is mirror or not
class Solution {
public:

    bool helper(TreeNode* left,TreeNode* right){
        if(left == nullptr && right == nullptr){
            return true;
        }

        return (left && right) && (left->val == right->val) && helper(left->left,right->right) && helper(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root->left,root->right);
    }
};
int main(){

}