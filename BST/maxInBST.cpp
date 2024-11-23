class Solution{
    public : 
        int findMAX(TreeNode* root){
            if(root == NULL) return -1;
            int max = INT_MIN;
            while(root != NULL){
                max = root->val;
                root = root->right;
            }
            return max;
        }
}