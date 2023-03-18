// https://youtu.be/zWYmcwFWp1M

#include<bits/stdc++.h>
using namespace std;

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
            post(root);
        }
}

int main(){

}