class Solution{
    public : 
        int findMin(TreeNode* root){
            if(root == NULL) return -1;
            int min = INT_MAX;
            while(root != NULL){
                min = root->val;
                root = root->left;
            }
            return min;
        }
}