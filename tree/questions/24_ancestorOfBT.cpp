bool helper(Node* root ,int target,vector<int>& ans){
    if(root == NULL){
            return false;
        }
        
        if(root->data == target){
            return true;
        }
        
        if(helper(root->left,target,ans) || helper(root->right,target,ans)){
        ans.push_back(root->data);
        return true;
        }
        
        return false;
}
vector<int> Ancestors(struct Node *root, int target)
{
        // Code here
        vector<int> ans;
        helper(root,target,ans);
        return ans;
        
}