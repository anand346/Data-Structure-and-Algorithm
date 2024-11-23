#include<bits/stdc++.h>
using namespace std;



void leftViewUtil(Node* root,int lvl,int* level,vector<int> &ans){
    
    if(root == NULL){
        return ;
    }
    
    if(*level < lvl){
        ans.push_back(root->data);
        *level = lvl;
    }
    
    leftViewUtil(root->left,lvl+1,level,ans);
    leftViewUtil(root->right,lvl+1,level,ans);
}
vector<int> leftView(Node *root)
{
   // Your code here
   
   vector<int> ans;
   int level = 0;
   leftViewUtil(root,1,&level,ans);
   
   return ans;
}

int main(){

}