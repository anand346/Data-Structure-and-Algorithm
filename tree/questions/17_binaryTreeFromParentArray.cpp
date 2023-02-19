// https://www.youtube.com/watch?v=BuM5rSaMeVM
// https://practice.geeksforgeeks.org/problems/construct-binary-tree-from-parent-array/1

Node* createTree(vector<int> parent,int n){
    map<int,Node*> mp ;
    for(int i = 0;i < n;i++){
        Node* n = new Node(i);
        mp[i] = n;
    }

    Node* root = NULL;
    for(int i = 0;i < n;i++){
        if(parent[i] == -1){
            root = mp[i];
        }else{
            if(mp[parent[i]]->left == NULL){
                mp[parent[i]]->left = mp[i];
            }else{
                mp[parent[i]]->right = mp[i];
            }
        }
    }
    return root;
}