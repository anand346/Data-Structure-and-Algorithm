#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class BTNode{
    public :
        T data;
        BTNode<T>* left;
        BTNode<T>* right;
        BTNode(T data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
        ~BTNode(){
            delete left;
            delete right;
        }

};
void printBTreeRecursive(BTNode<int>* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" : ";
    if(root->left != NULL){
        cout<<"L "<<root->left->data<<", ";
    }
    if(root->right != NULL){
        cout<<"R "<<root->right->data;
    }
    cout<<endl;
    printBTreeRecursive(root->left);
    printBTreeRecursive(root->right);
}
void printTreeLevelWise(BTNode<int> *root){
    queue<BTNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BTNode<int> *f = q.front();
        q.pop();
        cout<<f->data<<" : ";
        cout<<f->left->data<<", "<<f->right->data;
        cout<<endl;
        q.push(f->left);
        q.push(f->right);
    }
}
BTNode<int>* takeInputRecursive(){
    int rootData;
    cout<<"Enter root data : ";
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BTNode<int>* root = new BTNode<int>(rootData);
    root->left = takeInputRecursive();
    root->right = takeInputRecursive();
    return root;
}
BTNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data : "<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BTNode<int>* root = new BTNode<int>(rootData);
    queue<BTNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BTNode<int>* f = q.front();
        q.pop();
        cout<<"Enter left data for "<<f->data<<" : ";
        int leftData;
        cin>>leftData;
        if(leftData != -1){
            BTNode<int>* leftChild = new BTNode<int>(leftData);
            q.push(leftChild);
            f->left = leftChild;
        }
        cout<<"Enter right data for "<<f->data<<" : ";
        int rightData;
        cin>>rightData;
        if(rightData != -1){
            BTNode<int>* rightChild = new BTNode<int>(rightData);
            q.push(rightChild);
            f->right = rightChild;
        }
    }
    cout<<endl;
    return root;
}
bool searchNode(BTNode<int>* root, int key){
   if(root==NULL){
    return false;
   }
   if(root->data == key){
    return true;
   }
   return (searchNode(root->left,key) || searchNode(root->right,key));
}
int minValue(BTNode<int>* root){
    if(root==NULL){
        return INT_MAX;
    }
    int leftMin = minValue(root->left);
    int rightMin = minValue(root->right);

    return min(root->data, min(leftMin,rightMin));
}
void minValueOtherWay(BTNode<int>* root,int &ans){
    if(root==NULL){
        return;
    }
    ans = min(ans,root->data);
    minValueOtherWay(root->left,ans);
    minValueOtherWay(root->right,ans);
}

int maxValue(BTNode<int>* root){
    if(root==NULL){
        return INT_MIN;
    }
    int leftMax = maxValue(root->left);
    int rightMax = maxValue(root->right);

    return max(root->data, max(leftMax,rightMax));
}

void maxValueOtherWay(BTNode<int>* root,int &ans){
    if(root==NULL){
        return;
    }
    ans = max(ans,root->data);
    maxValueOtherWay(root->left,ans);
    maxValueOtherWay(root->right,ans);
}
int countLeafNode(BTNode<int>* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }

    return countLeafNode(root->left) + countLeafNode(root->right);
}

void countLeafNodeOtherWay(BTNode<int>* root,int &ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        ans++;
        ///return; optional
    }
    countLeafNodeOtherWay(root->left,ans);
    countLeafNodeOtherWay(root->right,ans);
}

//input 1 2 3 4 5 6 7 8 -1 -1 -1 9 -1 -1 -1 -1 -1 -1 -1
int main(){
    BTNode<int>*root = takeInputLevelWise();
    //printTreeLevelWise(root);
    printBTreeRecursive(root);
    delete root;
}