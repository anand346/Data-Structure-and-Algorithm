#include<bits/stdc++.h>
using namespace std;


class Solution{

    public : 
        vector<int> ans;

        vector<int> ans;

        void traversal(Node* root,int level){
            if(!root ) return ;
            if(level < ans.size()){
                if(root->data > ans[level]){
                    ans[level] = root->data;
                }
            }else{
                ans.push_back(root->data);
            }

            traversal(root->left,level+1);
            traversal(root->right,level+1);
        }

        vector<int> largestValues(Node* root){

            traversal(root,0);
            return ans;
        }
}