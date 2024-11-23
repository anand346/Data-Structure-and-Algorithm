class Solution{
    public :

        TreeNode* buidTreeHelper()
        TreeNode* constructTree(vector<TreeNode*> &pre,vector<TreeNode*> &in){
            int n = pre.size();

            return buildTreeHelper(pre,in,preS,preE,inS,inE);
        }
}