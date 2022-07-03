class Solution{
    public :
        int countNode(TreeNode *root){
            if(root == NULL) return 0;

            return countNode(root->left) + countNode(root->right) +1;
        }
}