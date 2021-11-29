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
            for(int i = 0; i < children.size();i++){
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
    for(int i = 0;i < root->children.size(); i++){
        print(root->children[i]);
    }
}
TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter root data : "<<endl;
    cin>>rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    int children;
    cout<<"Enter the no. of children for "<<root->data<<" : ";
    cin>>children;
    for(int i = 1;i <= children; i++){
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data : ";
    cin>>rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int> *f = q.front();
        q.pop();
        cout<<"Enter no. of child of "<<f->data<<" : ";
        int n;
        cin>>n;
        for(int i = 1;i <= n;i++){
            int childData ;
            cout<<"Enter child data of "<<i<<" child of "<<f->data<<" : ";
            cin>>childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
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
    for(int i = 0; i < root->children.size(); i++){
        ans += countNodes(root->children[i]);
    }
    return ans;
}
void printLevelWise(TreeNode<int> *root){
    if(root == NULL){
        return ;
    }
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int> *f = q.front();
        q.pop();
        cout<<f->data<<" : ";
        for(int i = 0;i < f->children.size(); i++){
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
        mx = height(root->children[i]);
    }
    return mx+1;
}
void printAtLevelK(TreeNode<int>* root,int k){
    if(root == NULL){
        return ;
    }
    if(k == 0){
        cout<<root->data<<endl;
    }
    for(int i = 0;i < root->children.size(); i++){
        printAtLevelK(root->children[i],k-1);
    }
}
void preOrder(TreeNode<int> *root){
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
    for(int i = 0;i < root->children.size(); i++){
        postOrder(root->children[i]);
    }
    cout<<root->data<<endl;
}
int main(){
    TreeNode<int> *root = takeInputLevelWise();
    // cout<<endl;
    // printLevelWise(root);
    // cout<<endl;
    // cout<<countNodes(root);
    // cout<<endl;
    // cout<<height(root);
    // cout<<endl;
    // printAtLevelK(root,2);
    postOrder(root);
}
//1 3 2 3 4 2 5 6 1 7 1 8 0 0 0 0 