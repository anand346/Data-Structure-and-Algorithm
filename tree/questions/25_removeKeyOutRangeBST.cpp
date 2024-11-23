Node* removekeys(Node* root, int min, int max) {
        // code here
    if(root == NULL){
        return NULL;
    }


    root->left = removekeys(root->left,min,max);
    root->right = removekeys(root->right,min,max);

    if(root->data < min){
        Node* rChild = root->right;
        delete root;
        return rChild;
    }

    if(root->data > max){
        Node* lChild = root->left;
        delete root;
        return lChild ;
    }

    return root;
}