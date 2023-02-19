// https://www.youtube.com/watch?v=9TJYWh0adfk
// https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :

        //for largest
        void  solve(Node* root , int &i , int k , int &ans)
        {
            if(root == NULL){
                return;
            }
            solve(root->right , i , k , ans);
            i++;
            if(i == k){
                ans=root->data;
                return;
            }
            solve(root->left , i , k , ans);
        }
        int kthLargest(Node *root, int k)

        { 
            int i=0;
            int ans = -1;
            solve(root , i , k , ans);
            return ans;
        }


        //for smallest
        void  solve1(Node* root , int &i , int k , int &ans)
        {
            if(root == NULL){
                return;
            }
            solve(root->left , i , k , ans);
            i--;
            if(i == 0){
                ans=root->data;
                return;
            }
            solve(root->right , i , k , ans);
        }
        int kthSmallest(Node *root, int k)

        { 
            int i=k;
            int ans = -1;
            solve1(root , i , k , ans);
            return ans;
        }
}