#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class TreeNode{
    public :
        int data;
        vector<TreeNode<T>*> children;
        TreeNode(T data){
            this->data = data;
        }
};
TreeNode<int>* takeInput(){
    int rootData;
    cout<<"enter root data : ";
    cin>>rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    cout<<"Enter no. of children : ";
    int n ;
    cin>>n;
    for(int i = 1 ;i <= n; i++){
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
int minValue(TreeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    int small = 0;
    for(int i = 0;i < root->children.size();i++){
        small = minValue(root->children[i]);
    }
    return min(root->data,small);
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
        cout<<"enter no. of children of "<<f->data<<" : ";
        int n;
        cin>>n;
        for(int i = 1; i<= n;i++){
            int children;
            cout<<"Enter "<<i<<"th children of "<<f->data<<" : ";
            cin>>children;
            TreeNode<int> *child = new TreeNode<int>(children);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}
void print(TreeNode<int> *root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" : ";
    for(int i = 0; i < root->children.size(); i++){
        cout<<root->children[i]->data<<" ,";
    }
    cout<<endl;
    for(int i = 0; i < root->children.size(); i++){
        print(root->children[i]);
    }
}
void printLevelWise(TreeNode<int> *root){
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
int height(TreeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    int mx = 0;
    for(int i = 0;i < root->children.size() ;i++){
        mx = max(mx,height(root->children[i]));
    }
    return mx+1;
}
int countLeafNodes(TreeNode<int> *root){
    if(root == NULL){
        return 0;
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
int main(){
    TreeNode<int> *root = takeInputLevelWise();
    // printLevelWise(root);
    // cout<<endl<<countNodes(root);
    // cout<<endl<<"height is : "<<height(root);
    cout<<"min value is : "<<minValue(root);
}