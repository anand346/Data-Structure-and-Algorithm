

#include<bits/stdc++.h>
using namespace std;


class Solution{

    public : 
        int maxSum ;
        

        void helper(Node* root , int sum){
            if(root == NULL){
                return ;
            }

            sum += root->data;

            if(root->left == NULL && root->right == NULL){
                if(sum > maxSum){
                    maxSum = sum;
                }
            }

            helper(root->left,sum);
            helper(root->right,sum);
        }

        int maxSumPath(Node* root){
            if(root == NULL){
                return 0;
            }

            maxSum = INT_MIN;
            helper(root,0);
            return maxSum;
        }
}

int main(){

}