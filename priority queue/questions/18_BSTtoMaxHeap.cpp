// https://youtu.be/zWYmcwFWp1M

#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
        int data;
        Node* left;
        Node* right;
        
        Node(){}
        Node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};


 

class Solution{
    public :
        vector<int> v;
        void in(Node *root){
            if(root == NULL) return ;
            in(root->left);
            v.push_back(root->data);
            in(root->right);
        }

        void post(Node *root){
            if(root == NULL) return ;
            post(root->left);
            post(root->right);
            root->data = v.back();
            v.pop_back();
        }

        void pre(Node* root){
            if(root == NULL) return ;
            root->data = v.back();
            v.pop_back();
            pre(root->left);
            pre(root->right);
            
        }

        void convertToMaxHeapUtil(Node* root){
            in(root);
            reverse(v.begin(),v.end());
            post(root); // change to pre (if want min heap)
        }
};

Node* insert(Node* root, int key)
{
    // if the root is null, create a new node and return it
    if (root == nullptr) {
        return new Node(key);
    }
 
    // if the given key is less than the root node, recur for the left subtree
    if (key < root->data) {
        root->left = insert(root->left, key);
    }
 
    // if the given key is more than the root node, recur for the right subtree
    else {
        root->right = insert(root->right, key);
    }
 
    return root;
}

void printLevelOrderTraversal(Node* root)
{
    // base case: empty tree
    if (root == nullptr) {
        return;
    }
 
    queue<Node*> q;
    q.push(root);
 
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            Node* front = q.front();
            q.pop();
 
            cout << front->data << ' ';
 
            if (front->left) {
                q.push(front->left);
            }
 
            if (front->right) {
                q.push(front->right);
            }
        }
 
        cout << endl;
    }
}

int main(){
    vector<int> keys = { 5, 3, 2, 4, 8, 6, 10 };
    Node* root = nullptr;
    for(auto el : keys){
        root = insert(root,el);
    }

    Solution sol;
    sol.convertToMaxHeapUtil(root);
    printLevelOrderTraversal(root);
    
}