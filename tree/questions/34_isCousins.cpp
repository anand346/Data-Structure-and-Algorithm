#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int xlvl = 0,ylvl = 0;
    TreeNode* xparent = NULL;
    TreeNode* yparent = NULL;

    void dfs(TreeNode* root,int x,int y,int level = 0,TreeNode* parent = NULL){
        if(!root) return ;

        if(x == root->val){
            xlvl = level;
            xparent = parent;
        }
        if(y == root->val){
            ylvl = level;
            yparent = parent;
        }

        dfs(root->left,x,y,level+1,parent=root);
        dfs(root->right,x,y,level+1,parent=root);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root,x,y);
        return xlvl ==  ylvl && xparent != yparent;
    }
};

int main(){

}