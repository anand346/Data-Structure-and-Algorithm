class Solution{
    public :

        void helper(TreeNode *root,vector<int> &ans){
            if(root == NULL) return ;

            ans.push_back(root->data) //root
            helper(root->left,ans) //left
            helper(root->right,ans) //right
        }
        vector<int> preOrder(TreeNode *root){
            vector<int> ans;
            helper(root,ans);
            return ans;
        }
}