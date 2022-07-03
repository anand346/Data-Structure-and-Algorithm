#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class TreeNode{
    public : 
        T data;
        vector<TreeNode<T>*> children;
        TreeNode(T data){
            this->data = data;
        }
        ~TreeNode(){
            for(int i = 0;i < children.size();i++){
                delete children[i];
            }
        }
};
void print(TreeNode<int> *root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" : ";
    for(int i = 0;i < root->children.size();i++){
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;
    for(int i = 0;i < root->children.size();i++){
        print(root->children[i]);
    }
}
TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data : "<<endl;
    cin>>rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    int n;
    cout<<"Enter no. of children of "<<rootData<<endl;
    cin>>n;
    for(int i = 1;i <= n; i++){
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data : "<<endl;
    cin>>rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int> *f = q.front();
        q.pop();
        cout<<"Enter no. of child of "<<f->data<<endl;
        int n;
        cin>>n;
        for(int i = 1;i <= n;i++){
            int children;
            cout<<"Enter "<<i<<"th children data of "<<f->data<<endl;
            cin>>children;
            TreeNode<int> *child = new TreeNode<int>(children);
            q.push(child); 
            f->children.push_back(child);
        }
    }
    return root;
}
int countNodes(TreeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    int ans = 1;
    for(int i = 0;i < root->children.size(); i++){
        ans += countNodes(root->children[i]);
    }
    return ans;
}
void printLevelWise(TreeNode<int>* root){
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>* f = q.front();
        q.pop();
        cout<<f->data<<" : ";
        for(int i = 0;i < f->children.size() ;i++){
            cout<<f->children[i]->data<<", ";
            q.push(f->children[i]);
        }
        cout<<endl;
    }
}
int height(TreeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    int mx = 0;
    for(int i = 0;i < root->children.size(); i++){
        //  int childrenHeight = height(root->children[i]);
        //  if(childrenHeight > mx){
        //     mx = childrenHeight;
        // }
        mx = max(mx,height(root->children[i]));
    }
    return mx+1;
}
void printAtLevelK(TreeNode<int>* root,int k){
    if(root == NULL){
        return ;
    }
    if(k == 0){
        cout<<root->data<<endl;
        return ;
    }
    for(int i = 0;i < root->children.size(); i++){
        printAtLevelK(root->children[i],k-1);
    }
}
int countLeafNodes(TreeNode<int>* root){
    if(root == NULL){
        return -1;
    }
    if(root->children.size() == 0){
        return 1;
    }
    int ans = 0;
    for(int i = 0;i < root->children.size(); i++){
        ans += countLeafNodes(root->children[i]);
    }
    return ans;
}
void preOrder(TreeNode<int>* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<endl;
    for(int i = 0;i < root->children.size();i++){
        preOrder(root->children[i]);
    }
}
void postOrder(TreeNode<int> *root){
    if(root == NULL){
        return ;
    }
    for(int i = 0;i < root->children.size();i++){
        postOrder(root->children[i]);
    }
    cout<<root->data<<endl;
}
void deleteTree(TreeNode<int>* root){
    if(root == NULL){
        return ;
    }
    for(int i = 0;i < root->children.size();i++){
        deleteTree(root->children[i]);
    }
    delete root;
}
int main(){
    //1 3 2 3 4 2 5 6 1 7 1 8 0 0 0 0 //direct input
    // TreeNode<int> *root = new TreeNode<int>(10);
    // TreeNode<int> *t1 = new TreeNode<int>(20);
    // TreeNode<int> *t2 = new TreeNode<int>(30);
    // root->children.push_back(t1);
    // root->children.push_back(t2);
    TreeNode<int> *root = takeInputLevelWise();
    printLevelWise(root);
    // cout<<"total nodes are : "<<countNodes(root)<<endl;
    // cout<<"height is : "<<height(root)<<endl;
    // cout<<"no. of leaf nodes "<<countLeafNodes(root)<<endl;
    // printAtLevelK(root,2);
    // preOrder(root);
    //postOrder(root);
    //deleteTree(root);
    //delete root;
}