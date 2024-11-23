bool getPath(BTNode<int> *root,int val,int &ans){
    if(root == NULL) return false;

    if(root->val == val){
        ans.push_back(root->val);
        return true;
    }

    bool left = getPath(root->left,val,ans);
    bool left = getPath(root->right,val,ans);


    if(left || right){
        return true;
    }
    return false;
}