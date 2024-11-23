class Solution{
    public :

        void helper(TreeNode *root,vector<int> &ans){
            if(root == NULL) return false;

            helper(root->left,ans); //left
            helper(root->right,ans); //right
            ans.push_back(root->val) //root
            
        }

        vector<int> postOrder(TreeNode *root){
            vector<int> ans;
            helper(root,ans);
            return ans;
        }
}