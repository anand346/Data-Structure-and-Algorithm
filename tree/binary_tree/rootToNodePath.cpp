bool getPath(BTNode<int>* root, int val, vector<int> &ans){
   if(root==NULL){
    return false;
   }
   ans.push_back(root->data);
   if(root->data == val){
    return true;
   }

   bool left = getPath(root->left, val, ans);
   bool right = getPath(root->right, val, ans);

   if(left || right){
    return true;
   }
   ans.pop_back();
   return false;

}