https://practice.geeksforgeeks.org/problems/maximum-sum-leaf-to-root-path/1

#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here

        if(root == NULL){
            return INT_MIN;
        }

        if(root->left == NULL && root->right == NULL){
            return root->data;
        }

        int left = sumOfLongRootToLeafPath(root->left);
        int right = sumOfLongRootToLeafPath(root->right);

        return (left > right ? left : right) + root->data;

    }
};

int main(){

}