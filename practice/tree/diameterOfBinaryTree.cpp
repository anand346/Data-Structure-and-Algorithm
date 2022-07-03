class Solution{
    public :
        int height(TreeNode *root){
            if(root == NULL) return 0;

            return max(height(root->left),height(root->right)) + 1;
        }

        int diameterBT(TreeNode *root){
            if(root == NULL) return 0;

            int option1 = height(root->left) + height(root->right);
            int option2 = diameterBT(root->left);
            int option3 = diameterBT(root->right);

            return max(option1,max(option2,option3));
        }
}