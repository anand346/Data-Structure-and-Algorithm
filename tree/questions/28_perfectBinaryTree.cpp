#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int maxHeight(Node* root){
        
        if(!root){
            return 0;
        }
        int lh = maxHeight(root->left);
        int rh = maxHeight(root->right);
        
        return max(lh,rh)+1;
    }
    
    int minHeight(Node* root){
        if(!root){
            return 0;
        }
        
        int lh = minHeight(root->left);
        int rh = minHeight(root->right);
        
        return min(lh,rh)+1;
    }
    bool isPerfect(Node *root)
    {
        //code here
        
        int mx = maxHeight(root);
        int mn = minHeight(root);
        
        return mx == mn;
    }
};

int main(){

}