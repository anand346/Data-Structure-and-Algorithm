// https://leetcode.com/problems/minimum-depth-of-binary-tree/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int helper(TreeNode* root){
        if(!root){
            return 0;
        }

        int lh = helper(root->left);
        int rh = helper(root->right);
        if(lh == 0 && rh == 0){
            return 1;
        }else if(lh == 0){
            return rh+1;
        }else if(rh == 0){
            return lh+1;
        }
        return min(lh,rh)+1;
    }
    int minDepth(TreeNode* root) {
       return helper(root); 
    }
};