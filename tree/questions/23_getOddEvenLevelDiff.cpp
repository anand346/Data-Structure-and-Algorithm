#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :


    int getLevelDiff(Node* root){
        if(root == NULL){
            return 0;
        }

        return root->data - getLevelDiff(root->left) - getLevelDiff(root->right);
    }
}

int main(){

}