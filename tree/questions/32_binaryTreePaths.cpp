// https://leetcode.com/problems/binary-tree-paths/

class Solution {
public:
    vector<string> ans;
    void helper(TreeNode* root,string temp){

        if(!root){
            if(temp != ""){
                return ;
            }else{
                ans.push_back(temp);
                return ;
            }
        }

        temp = temp+to_string(root->val)+"->";
        if(!root->left && !root->right){
            temp = temp.substr(0,temp.size()-2);
            ans.push_back(temp);
        }
        if(root->left){
            helper(root->left,temp);
        }
        if(root->right){
            helper(root->right,temp);
        }
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {

        helper(root,"");

        return ans;
    }
};